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

<!--| Linux 14.04| OS X (10.1)  | Windows  |
|:------------- |:-------------:|: -----:|
|[![Build Status](https://semaphoreapp.com/api/v1/projects/d4cca506-99be-44d2-b19e-176f36ec8cf1/128505/shields_badge.svg)](https://semaphoreapp.com/boennemann/badges)| [![Build Status](https://semaphoreapp.com/api/v1/projects/d4cca506-99be-44d2-b19e-176f36ec8cf1/128505/shields_badge.svg)](https://semaphoreapp.com/boennemann/badges) | Not Supported |-->

| Linux       | OS X
| :-------------: |:-------------:|
|[![Build Status](https://semaphoreapp.com/api/v1/projects/d4cca506-99be-44d2-b19e-176f36ec8cf1/128505/shields_badge.svg)](https://semaphoreapp.com/boennemann/badges)      | [![Build Status](https://semaphoreapp.com/api/v1/projects/d4cca506-99be-44d2-b19e-176f36ec8cf1/128505/shields_badge.svg)](https://semaphoreapp.com/boennemann/badges) 

Tested Compilers: gcc | g++ 4.2.1 or above

Tested Hardware: Intel Core i7 CPU, 2.0 GB RAM






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

### Related repositories:

Automatic localisation and docking action interfaces with the Turtlebot 2 (Kobuki base) 
https://github.com/KCL-Planning/ROSPlan_interface_Turtlebot2

Integration with the Component Oriented Layered-base Architecture for Autonomy (COLA2). Developed in the Research Center of Underwater Robotics (CIRS) in the University of Girona (UdG). This architecture is used to control the Autonomous Underwater Vehicles (AUVs) developed in this center. (https://bitbucket.org/udg_cirs/cola2)
https://github.com/KCL-Planning/ROSPlan_interface_COLA2

Action interfaces for piloting a quadrotor from Jindrich Vodrazka, (takeoff, land, fly_square, and fly_waypoint).
https://github.com/fairf4x/ROSPlan_interface_quadrotor


# Approximate POMDP Planning Online (APPL Online) Toolkit

[Copyright &copy; 2014-2017 by National University of Singapore](http://motion.comp.nus.edu.sg/).

APPL Online is a C++ implementation of the DESPOT algorithm for online POMDP planning [1]. It takes as input a POMDP model in the POMDPX file format. It also provides an API for interfacing directly with a blackbox simulator. 

For bug reports and suggestions, please email <motion@comp.nus.edu.sg>.

[1] N. Ye, A. Somani, D. Hsu, and W. Lee. [**DESPOT: Online POMDP planning with regularization**](http://bigbird.comp.nus.edu.sg/m2ap/wordpress/wp-content/uploads/2017/08/jair14.pdf). J. Artificial Intelligence Research, 58:231–266, 2017.



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

<!--| Linux 14.04| OS X (10.1)  | Windows  |
|:------------- |:-------------:|: -----:|
|[![Build Status](https://semaphoreapp.com/api/v1/projects/d4cca506-99be-44d2-b19e-176f36ec8cf1/128505/shields_badge.svg)](https://semaphoreapp.com/boennemann/badges)| [![Build Status](https://semaphoreapp.com/api/v1/projects/d4cca506-99be-44d2-b19e-176f36ec8cf1/128505/shields_badge.svg)](https://semaphoreapp.com/boennemann/badges) | Not Supported |-->

| Linux       | OS X
| :-------------: |:-------------:|
|[![Build Status](https://semaphoreapp.com/api/v1/projects/d4cca506-99be-44d2-b19e-176f36ec8cf1/128505/shields_badge.svg)](https://semaphoreapp.com/boennemann/badges)      | [![Build Status](https://semaphoreapp.com/api/v1/projects/d4cca506-99be-44d2-b19e-176f36ec8cf1/128505/shields_badge.svg)](https://semaphoreapp.com/boennemann/badges) 

Tested Compilers: gcc | g++ 4.2.1 or above

Tested Hardware: Intel Core i7 CPU, 2.0 GB RAM

## Download

Clone the repository from Github (**Recommended**):
```bash
$ git clone https://github.com/AdaCompNUS/despot.git
```
OR manually download the [Zip Files](https://github.com/AdaCompNUS/despot/archive/master.zip). For instructions, use this online Github README. 

## Installation

Compile using `make`:
```bash
$ cd despot
$ make
```

(Optional): If you prefer using `CMake` see the [CMakeLists](#cmakelists) section.

## Quick Start

DESPOT can be used to solve a POMDP specified in the **POMDPX** format or a POMDP
specified in **C++** according to the API. We illustrate this on the [Tiger](http://people.csail.mit.edu/lpk/papers/aij98-pomdp.pdf) problem.


1.To run Tiger specified in [POMDPX format](http://bigbird.comp.nus.edu.sg/pmwiki/farm/appl/index.php?n=Main.PomdpXDocumentation.), compile and run:

```bash
$ cd despot/examples/pomdpx_models
$ make
$ ./pomdpx -m ./data/Tiger.pomdpx --runs 2 
```

This command computes and simulates DESPOT's policy for `N = 2` runs and reports the
performance for the tiger problem specified in POMDPX format. See [doc/Usage.txt](doc/Usage.txt) for 
more options. For more details on the POMPDX format, see [this page](http://bigbird.comp.nus.edu.sg/pmwiki/farm/appl/index.php?n=Main.PomdpXDocumentation.)

2.To run Tiger specified in [C++](doc/cpp_model_doc), compile and run: 
```bash
$ cd despot/examples/cpp_models/tiger
$ make
$ ./tiger --runs 2
```

This command computes and simulates DESPOT's policy for `N = 2` runs and reports the
performance for the tiger problem specified in C++. See [doc/Usage.txt](doc/Usage.txt) for more options.


## Documentation

Documentation can be found in the "[doc](doc/)" directory. 

For a description of our example domains and more POMDP problems see [the POMDP page](http://www.pomdp.org/examples/).

## Package Contents

```
Makefile                  Makefile for compiling the solver library
README.md                 Overview
include                   Header files
src/core                  Core data structures for the solvers
src/solvers               Solvers, including despot, pomcp and aems
src/pomdpx                Pomdpx and its parser
src/util                  Math and logging utilities
license                   Licenses and attributions
examples/cpp_models       POMDP models implemented in C++
examples/pomdpx_models    POMDP models implemented in pomdpx
doc/pomdpx_model_doc      Documentation for POMDPX file format
doc/cpp_model_doc         Documentation for implementing POMDP models in C++
doc/usage.txt             Explanation of command-line options
doc/eclipse_guide.md      Guide for using Eclipse IDE for development
```

## CMakeLists

**(Optional)**

If you are interested in integrating DESPOT into an existing CMake project or using an IDE for editing, we provide a [CMakeLists.txt](CMakeLists.txt).

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

## Acknowledgements

Pocman implementation and memorypool.h in the package are based on David
Silver's [POMCP code](http://www0.cs.ucl.ac.uk/staff/D.Silver/web/Applications.html)

## Bugs and Suggestions
Please use the issue tracker.

## Release Notes
2015/09/28 Initial release.

2017/03/07 Public release. Revised documentation.

