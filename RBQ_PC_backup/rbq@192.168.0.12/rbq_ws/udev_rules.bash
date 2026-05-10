#!/usr/bin/env bash
set -e

# Exit if executed with sudo
if [ "$EUID" -eq 0 ]; then
    echo "Do not run this script with sudo. Exiting..."
    exit 1
fi

echo 'SUBSYSTEM=="usb", ATTRS{idVendor}=="03e7", MODE="0666"' | sudo tee /etc/udev/rules.d/80-movidius.rules
sudo udevadm control --reload-rules && sudo udevadm trigger
