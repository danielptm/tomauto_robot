### Python version
`3.12.3`
### Ros setup
###If not working, use this to install ros2
https://docs.ros.org/en/jazzy/Installation/Ubuntu-Install-Debs.html

### Pycharm ros setup
1. Settings > project structure > add content root
2. Add directory: `/opt/ros/<distro>/lib/<python_version>/site-packages`
3. After colcon build/source, mark `./install/<package>/lib/<python.v>/site-packages` as sources root
3. You should get ros code completion in the python project now

Use this as a guide for pycharm source issues:
https://cps.unileoben.ac.at/how-to-setup-ros2-in-pycharm/

### Good article describing how to create a library
https://medium.com/analytics-vidhya/how-to-create-a-python-library-7d5aea80cc3f

### launch testing
https://docs.ros.org/en/ros2_packages/rolling/api/launch_testing/

### How to create a package
Inside of the src/pkg folder run:
`ros2 pkg create my_py_pkg --build-type ament_python --dependencies rclpy`

### How to build packages
`colcon build --packages-select my_py_pkg`

### Source project
`source ~/.bashrc`

### Publish a message to a dm
1. run colcon build
2. source bashrc
3. In 1 terminal `ros2 run dm mock_dc_motors`
4. In 2nd terminal `ros2 topic pub --once /dc_motor_sub example_interfaces/msg/String "data: 'hello from dpt'"`

### How create launch file
1. Create a new package: `ros2 pkg create <myrobot>_bringup`
2. Remove include and src files
3. Add a new folder called `launch/`
4. Refactor CmakeLists.txt file (delete some code and add install function call)
5. Add `.launch.xml` file to launch folder (Course: ROS2 for beginners, Create and install a launch file (xml) (6m30s)


### How to start with launch file
`ros2 launch tomauto_robot_bringup tomauto_robot.launch.xml`

### Show logs (or similar)
`tail -f /home/daniel/.ros/log/2025-10-08-13-35-32-823244-ubuntu-laptop-61127/launch.log`

### publish message for forward_arrow
ros2 topic pub --once /drive_camera_sub tomauto_interfaces/msg/DriveCamera "detected_object: 'forward_arrow'"


### List active ros nodes
`ros2 node list`