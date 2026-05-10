import sys
import rclpy
from rclpy.node import Node
from rbq_msgs.msg import HighLevelCommand
import cv2
import numpy as np
import subprocess

class PipeUDPController(Node):
    def __init__(self):
        super().__init__('pipe_udp_controller')
        self.get_logger().info("==== GStreamer 독립 프로세스 우회 수신 모드 (JPEG) ====")
        
        self.width = 1280
        self.height = 720
        self.frame_size = self.width * self.height * 3
        
        udp_port = 28554
        self.get_logger().info(f"백그라운드에서 GStreamer를 별도로 실행하여 {udp_port} 포트를 감시합니다.")

        # JPEG 코덱으로 파이프라인 수정!
        cmd = [
            'gst-launch-1.0', '-q',
            'udpsrc', f'port={udp_port}', '!',
            'application/x-rtp,media=(string)video,encoding-name=JPEG', '!',
            'rtpjpegdepay', '!', 'jpegdec', '!', 'videoconvert', '!',
            f'video/x-raw,format=BGR,width={self.width},height={self.height}', '!',
            'fdsink'
        ]
        
        self.gst_process = subprocess.Popen(cmd, stdout=subprocess.PIPE, stderr=subprocess.DEVNULL)
        
        self.timer = self.create_timer(0.033, self.timer_callback)
        self.cmd_publisher = self.create_publisher(HighLevelCommand, '/rbq/motion/cmd_highLevel', 10)


    def timer_callback(self):
        try:
            raw_bytes = self.gst_process.stdout.read(self.frame_size)
            if len(raw_bytes) == self.frame_size:
                frame = np.frombuffer(raw_bytes, dtype=np.uint8).reshape((self.height, self.width, 3))
                self.process_vision(frame)
        except Exception as e:
            self.get_logger().error(f"프레임 읽기 실패: {e}")

    def process_vision(self, frame):
        cv2.imshow("Real Robot Vision (JPEG UDP)", frame)
        cv2.waitKey(1)

    
    def move_robot(self, vel_x, omega_z):
        msg = HighLevelCommand()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.header.frame_id = "base"
        msg.identifier = "qr_tracking"
        
        msg.vel_x = float(vel_x)
        msg.vel_y = 0.0
        msg.omega_z = float(omega_z)
        
        msg.roll = 0.0
        msg.pitch = 0.0
        msg.yaw = 0.0
        msg.delta_body_h = 0.0
        msg.delta_foot_h = 0.0
        
        msg.gait_state = 3 
        msg.gait_transition = False
        
        self.cmd_publisher.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    node = PipeUDPController()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        if hasattr(node, 'gst_process'):
            node.gst_process.terminate()
        cv2.destroyAllWindows()
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
