### Ros setup
If not working, use this
https://docs.ros.org/en/jazzy/Installation/Ubuntu-Install-Debs.html

### Pycharm ros setup
1. Settings > project structure > add content root
2. Add directory: `/opt/ros/<distro>/lib/<python_version>/site-packages`
3. You should get ros code completion in the python project now

Use this as a guide:
https://cps.unileoben.ac.at/how-to-setup-ros2-in-pycharm/


### Create venv
`python3 -m venv venv`

### Activate environment
`source venv/bin/activate`

### How to create a package
Inside of the src/pkg folder run:
`ros2 pkg create my_py_pkg --build-type ament_python --dependencies rclpy`

### How to build packages
`colcon build colcon build --packages-select my_py_pkg`

### Source project
`source ~/.bashrc`