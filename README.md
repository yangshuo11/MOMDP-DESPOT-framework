# MOMDP-DESPOT-framework
A integrated framework for robotic task planning and execution monitoring

This framework integrates the ROSPlan symbolic task planning framework with the DESPOT POMDP solver, as well as develops a standarized ROS-interfaced middleware for realistic robotic plan execution.

## Table of Contents

* [Requirements](#requirements)
* [Download](#download)
* [Installation](#installation)
* [Quick Start](#quick-start)
* [Documentation](#documentation)
* [Package Contents](#package-contents)
* [CMakeLists](#cmakelists)
* [Acknowledgements](#acknowledgements)
* [Bugs and Suggestions](#bugs-and-suggestions)
* [Release Notes](#release-notes)

## Requirements
Tested Operating Systems:

| Ubuntu 16.04 |ROS Kinetic | OS X (10.13.6) | 

Tested Compilers: gcc | g++ 4.2.1 or above

Tested Hardware: Intel Core i7 CPU, 8.0 GB RAM

Get the prerequisites:

(for Kinetic)
```sh
sudo apt-get install flex ros-kinetic-move-base-msgs ros-kinetic-mongodb-store ros-kinetic-tf2-bullet freeglut3-dev python-catkin-tools
```
(for Indigo)
```sh
sudo apt-get install flex ros-indigo-mongodb-store ros-indigo-tf2-bullet freeglut3-dev python-catkin-tools
```

## Download

Clone the repository from Github (**Recommended**):
```bash
$ git clone https://github.com/yangshuo11/MOMDP-DESPOT-framework.git
```

## Installation

To install DESPOT libraries and header files into your system directory:

```bash
$ cd despot
$ mkdir build; cd build
$ cmake ../
$ make
$ sudo make install
```
To integrate DESPOT into your project, add this to your `CMakeLists.txt` file:

```CMake
find_package(Despot CONFIG REQUIRED)

add_executable("YOUR_PROJECT_NAME"
  <your_src_files>
)

target_link_libraries("YOUR_PROJECT_NAME"
  despot
)
```

To build ROSPlan package:
```sh
cd ROSPlan/
catkin build
```

## Quick Start

DESPOT can be used to solve a POMDP specified in the **POMDPX** format. We illustrate this on the navigation problem present int the manuscript.

1.To run Navigation task, compile and run:

```bash
$ cd despot/examples/pomdpx_models
$ make
$ ./pomdpx -m ./data/ActionMonitorNew.pomdpx --runs 2 
```

This command computes and simulates DESPOT's policy for `N = 2` runs and reports the
performance for the Navigation problem specified in POMDPX format.

2.To startup the ROSPlan node and gazebo simulator for future execution of the above policy: 

In the first terminal, begin the simulation, rviz visualisation, and ROSPlan nodes using the `turtlebot.launch` from the rosplan_demos package:
```
roslaunch rosplan_demos turtlebot.launch
```
In the second terminal run `turtlebot_explore.bash`, a script which
- adds to the knowledge base the PDDL objects and facts which comprise the initial state;
- adds the goals to the knowledge base; and
- calls the ROSPlan services which generate a plan and dispatch it.
```
rosrun rosplan_demos turtlebot_explore.bash
```
You should see the following output from the script:
```
waypoints: ['wp0', 'wp1', 'wp2', 'wp3', 'wp4', 'wp5']
Adding initial state and goals to knowledge base.
success: True
success: True
Calling problem generator.
Calling planner interface.
Calling plan parser.
Calling plan dispatcher.
Finished!
```

3. Execute the computed policy from DESPOT within the simulaor.
The turtlebot will move around the waypoints, exploring the environment. You should see execution orders of both information-gathering and task achievement actions in the first terminal, something like:
```
...
KCL: (/rosplan_problem_interface) (problem.pddl) Generating problem file.
KCL: (/rosplan_problem_interface) (problem.pddl) The problem was generated.
KCL: (/rosplan_planner_interface) Problem received.
KCL: (/rosplan_planner_interface) (problem.pddl) Writing problem to file.
KCL: (/rosplan_planner_interface) (problem.pddl) Running: timeout 10 /home/michael/ros_indigo/turtlebot/src/rosplan/rosplan_planning_system/common/bin/popf /home/michael/ros_indigo/turtlebot/src/rosplan/rosplan_demos/common/domain_turtlebot_demo.pddl /home/michael/ros_indigo/turtlebot/src/rosplan/rosplan_demos/common/problem.pddl > /home/michael/ros_indigo/turtlebot/src/rosplan/rosplan_demos/common/plan.pddl
KCL: (/rosplan_planner_interface) (problem.pddl) Planning complete
KCL: (/rosplan_planner_interface) (problem.pddl) Plan was solved.
KCL: (/rosplan_parsing_interface) Planner output received.
KCL: (/rosplan_parsing_interface) Parsing planner output.
KCL: (/rosplan_plan_dispatcher) Plan received.
KCL: (/rosplan_plan_dispatcher) Dispatching plan.
KCL: (/rosplan_plan_dispatcher) Dispatching action [0, goto_waypoint, 0.804106, 10.000000]
KCL: (/rosplan_plan_dispatcher) Feedback received [0, action enabled]
```











ROSPlan Framework
=================
[![Build Status](https://travis-ci.com/KCL-Planning/ROSPlan.svg?branch=master)](https://travis-ci.com/KCL-Planning/ROSPlan)

The main ROSPlan website and documentation is available here:
http://kcl-planning.github.io/ROSPlan/

The ROSPlan framework provides a generic method for task planning in a ROS system. ROSPlan encapsulates both planning and dispatch. It possesses a simple interface, and already includes interfaces to common ROS libraries.

### Installation

Get the prerequisites:

(for Kinetic)
```sh
sudo apt-get install flex ros-kinetic-move-base-msgs ros-kinetic-mongodb-store ros-kinetic-tf2-bullet freeglut3-dev python-catkin-tools
```
(for Indigo)
```sh
sudo apt-get install flex ros-indigo-mongodb-store ros-indigo-tf2-bullet freeglut3-dev python-catkin-tools
```
Select a catkin workspace or create a new one:
```sh
mkdir -p ROSPlan/src
cd ROSPlan/
```
Get the code:
```sh
cd src/
git clone https://github.com/clearpathrobotics/occupancy_grid_utils
git clone https://github.com/KCL-Planning/rosplan
```
Compile everything:
```sh
catkin build
```

### Running a demo with the turtlebot

The turtlebot demo is now a simple exploration mission. The turtlebot will visit randomly generated waypoints around a map.

The domain for this demo is in the `rosplan_demos` package, as `common/domain_turtlebot_demo.pddl`.

To run the demo first follow the installation instructions and quick-start guide for the Turtlebot Simulator and Gazebo:

[Turtlebot Gazebo](http://wiki.ros.org/turtlebot_gazebo) 

[Turtlebot Simulator](http://wiki.ros.org/turtlebot_simulator) 

Then source the ROSPlan workspace in two terminals.

*1.* In the first terminal, begin the simulation, rviz visualisation, and ROSPlan nodes using the `turtlebot.launch` from the rosplan_demos package:
```
roslaunch rosplan_demos turtlebot.launch
```

*2.* In the second terminal run `turtlebot_explore.bash`, a script which
- adds to the knowledge base the PDDL objects and facts which comprise the initial state;
- adds the goals to the knowledge base; and
- calls the ROSPlan services which generate a plan and dispatch it.
```
rosrun rosplan_demos turtlebot_explore.bash
```

You should see the following output from the script:
```
waypoints: ['wp0', 'wp1', 'wp2', 'wp3', 'wp4', 'wp5']
Adding initial state and goals to knowledge base.
success: True
success: True
Calling problem generator.
Calling planner interface.
Calling plan parser.
Calling plan dispatcher.
Finished!
```

The turtlebot will move around the waypoints, exploring the environment. You should see output in the first terminal, something like:
```
...
KCL: (/rosplan_problem_interface) (problem.pddl) Generating problem file.
KCL: (/rosplan_problem_interface) (problem.pddl) The problem was generated.
KCL: (/rosplan_planner_interface) Problem received.
KCL: (/rosplan_planner_interface) (problem.pddl) Writing problem to file.
KCL: (/rosplan_planner_interface) (problem.pddl) Running: timeout 10 /home/michael/ros_indigo/turtlebot/src/rosplan/rosplan_planning_system/common/bin/popf /home/michael/ros_indigo/turtlebot/src/rosplan/rosplan_demos/common/domain_turtlebot_demo.pddl /home/michael/ros_indigo/turtlebot/src/rosplan/rosplan_demos/common/problem.pddl > /home/michael/ros_indigo/turtlebot/src/rosplan/rosplan_demos/common/plan.pddl
KCL: (/rosplan_planner_interface) (problem.pddl) Planning complete
KCL: (/rosplan_planner_interface) (problem.pddl) Plan was solved.
KCL: (/rosplan_parsing_interface) Planner output received.
KCL: (/rosplan_parsing_interface) Parsing planner output.
KCL: (/rosplan_plan_dispatcher) Plan received.
KCL: (/rosplan_plan_dispatcher) Dispatching plan.
KCL: (/rosplan_plan_dispatcher) Dispatching action [0, goto_waypoint, 0.804106, 10.000000]
KCL: (/rosplan_plan_dispatcher) Feedback received [0, action enabled]
...
```


