#!/bin/bash

while true; do
    read -p "command: " cmd
    if [[ "$cmd" == "forward" ]]; then
        ros2 topic pub --once /drive_camera_sub tomauto_interfaces/msg/DriveCamera "detected_object: 'forward_arrow'"
    else
        echo "meh"
    fi
done
