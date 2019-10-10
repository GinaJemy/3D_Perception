# 3D Perception
## This project attempts to use perception to locate and classify objects for a robotic arm to pick and place.
## It is copied from https://github.com/hortovanyi/RoboND-Perception-Project 

Before using the perception pipeline you must install 
          sklearn and matplotlib

To use the perception pipelie you should follow these steps :
  cd robo_ws
  source devel/setup.bash
  roslaunch pr2_robot pick_place_project.launch
  cd /src/RoboND-Perception-Project/pr2_robot/scripts/
  python3 perception_pipeline.py
  
  
  In the launch file you can change the world you are testing and the pick_list
  
