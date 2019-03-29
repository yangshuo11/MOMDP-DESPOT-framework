# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "rosplan_momdp: 1 messages, 1 services")

set(MSG_I_FLAGS "-Irosplan_momdp:/home/ys/MOMDP_DESPOT/ROSPlan/src/rosplan_momdp/msg;-Istd_msgs:/opt/ros/kinetic/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genjava REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(rosplan_momdp_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/ys/MOMDP_DESPOT/ROSPlan/src/rosplan_momdp/msg/Num.msg" NAME_WE)
add_custom_target(_rosplan_momdp_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "rosplan_momdp" "/home/ys/MOMDP_DESPOT/ROSPlan/src/rosplan_momdp/msg/Num.msg" ""
)

get_filename_component(_filename "/home/ys/MOMDP_DESPOT/ROSPlan/src/rosplan_momdp/srv/AddTwoInts.srv" NAME_WE)
add_custom_target(_rosplan_momdp_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "rosplan_momdp" "/home/ys/MOMDP_DESPOT/ROSPlan/src/rosplan_momdp/srv/AddTwoInts.srv" ""
)

#
#  langs = gencpp;geneus;genjava;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(rosplan_momdp
  "/home/ys/MOMDP_DESPOT/ROSPlan/src/rosplan_momdp/msg/Num.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/rosplan_momdp
)

### Generating Services
_generate_srv_cpp(rosplan_momdp
  "/home/ys/MOMDP_DESPOT/ROSPlan/src/rosplan_momdp/srv/AddTwoInts.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/rosplan_momdp
)

### Generating Module File
_generate_module_cpp(rosplan_momdp
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/rosplan_momdp
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(rosplan_momdp_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(rosplan_momdp_generate_messages rosplan_momdp_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/ys/MOMDP_DESPOT/ROSPlan/src/rosplan_momdp/msg/Num.msg" NAME_WE)
add_dependencies(rosplan_momdp_generate_messages_cpp _rosplan_momdp_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/ys/MOMDP_DESPOT/ROSPlan/src/rosplan_momdp/srv/AddTwoInts.srv" NAME_WE)
add_dependencies(rosplan_momdp_generate_messages_cpp _rosplan_momdp_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(rosplan_momdp_gencpp)
add_dependencies(rosplan_momdp_gencpp rosplan_momdp_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS rosplan_momdp_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(rosplan_momdp
  "/home/ys/MOMDP_DESPOT/ROSPlan/src/rosplan_momdp/msg/Num.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/rosplan_momdp
)

### Generating Services
_generate_srv_eus(rosplan_momdp
  "/home/ys/MOMDP_DESPOT/ROSPlan/src/rosplan_momdp/srv/AddTwoInts.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/rosplan_momdp
)

### Generating Module File
_generate_module_eus(rosplan_momdp
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/rosplan_momdp
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(rosplan_momdp_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(rosplan_momdp_generate_messages rosplan_momdp_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/ys/MOMDP_DESPOT/ROSPlan/src/rosplan_momdp/msg/Num.msg" NAME_WE)
add_dependencies(rosplan_momdp_generate_messages_eus _rosplan_momdp_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/ys/MOMDP_DESPOT/ROSPlan/src/rosplan_momdp/srv/AddTwoInts.srv" NAME_WE)
add_dependencies(rosplan_momdp_generate_messages_eus _rosplan_momdp_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(rosplan_momdp_geneus)
add_dependencies(rosplan_momdp_geneus rosplan_momdp_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS rosplan_momdp_generate_messages_eus)

### Section generating for lang: genjava
### Generating Messages
_generate_msg_java(rosplan_momdp
  "/home/ys/MOMDP_DESPOT/ROSPlan/src/rosplan_momdp/msg/Num.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genjava_INSTALL_DIR}/rosplan_momdp
)

### Generating Services
_generate_srv_java(rosplan_momdp
  "/home/ys/MOMDP_DESPOT/ROSPlan/src/rosplan_momdp/srv/AddTwoInts.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genjava_INSTALL_DIR}/rosplan_momdp
)

### Generating Module File
_generate_module_java(rosplan_momdp
  ${CATKIN_DEVEL_PREFIX}/${genjava_INSTALL_DIR}/rosplan_momdp
  "${ALL_GEN_OUTPUT_FILES_java}"
)

add_custom_target(rosplan_momdp_generate_messages_java
  DEPENDS ${ALL_GEN_OUTPUT_FILES_java}
)
add_dependencies(rosplan_momdp_generate_messages rosplan_momdp_generate_messages_java)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/ys/MOMDP_DESPOT/ROSPlan/src/rosplan_momdp/msg/Num.msg" NAME_WE)
add_dependencies(rosplan_momdp_generate_messages_java _rosplan_momdp_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/ys/MOMDP_DESPOT/ROSPlan/src/rosplan_momdp/srv/AddTwoInts.srv" NAME_WE)
add_dependencies(rosplan_momdp_generate_messages_java _rosplan_momdp_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(rosplan_momdp_genjava)
add_dependencies(rosplan_momdp_genjava rosplan_momdp_generate_messages_java)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS rosplan_momdp_generate_messages_java)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(rosplan_momdp
  "/home/ys/MOMDP_DESPOT/ROSPlan/src/rosplan_momdp/msg/Num.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/rosplan_momdp
)

### Generating Services
_generate_srv_lisp(rosplan_momdp
  "/home/ys/MOMDP_DESPOT/ROSPlan/src/rosplan_momdp/srv/AddTwoInts.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/rosplan_momdp
)

### Generating Module File
_generate_module_lisp(rosplan_momdp
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/rosplan_momdp
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(rosplan_momdp_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(rosplan_momdp_generate_messages rosplan_momdp_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/ys/MOMDP_DESPOT/ROSPlan/src/rosplan_momdp/msg/Num.msg" NAME_WE)
add_dependencies(rosplan_momdp_generate_messages_lisp _rosplan_momdp_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/ys/MOMDP_DESPOT/ROSPlan/src/rosplan_momdp/srv/AddTwoInts.srv" NAME_WE)
add_dependencies(rosplan_momdp_generate_messages_lisp _rosplan_momdp_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(rosplan_momdp_genlisp)
add_dependencies(rosplan_momdp_genlisp rosplan_momdp_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS rosplan_momdp_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(rosplan_momdp
  "/home/ys/MOMDP_DESPOT/ROSPlan/src/rosplan_momdp/msg/Num.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/rosplan_momdp
)

### Generating Services
_generate_srv_nodejs(rosplan_momdp
  "/home/ys/MOMDP_DESPOT/ROSPlan/src/rosplan_momdp/srv/AddTwoInts.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/rosplan_momdp
)

### Generating Module File
_generate_module_nodejs(rosplan_momdp
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/rosplan_momdp
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(rosplan_momdp_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(rosplan_momdp_generate_messages rosplan_momdp_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/ys/MOMDP_DESPOT/ROSPlan/src/rosplan_momdp/msg/Num.msg" NAME_WE)
add_dependencies(rosplan_momdp_generate_messages_nodejs _rosplan_momdp_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/ys/MOMDP_DESPOT/ROSPlan/src/rosplan_momdp/srv/AddTwoInts.srv" NAME_WE)
add_dependencies(rosplan_momdp_generate_messages_nodejs _rosplan_momdp_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(rosplan_momdp_gennodejs)
add_dependencies(rosplan_momdp_gennodejs rosplan_momdp_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS rosplan_momdp_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(rosplan_momdp
  "/home/ys/MOMDP_DESPOT/ROSPlan/src/rosplan_momdp/msg/Num.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/rosplan_momdp
)

### Generating Services
_generate_srv_py(rosplan_momdp
  "/home/ys/MOMDP_DESPOT/ROSPlan/src/rosplan_momdp/srv/AddTwoInts.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/rosplan_momdp
)

### Generating Module File
_generate_module_py(rosplan_momdp
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/rosplan_momdp
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(rosplan_momdp_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(rosplan_momdp_generate_messages rosplan_momdp_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/ys/MOMDP_DESPOT/ROSPlan/src/rosplan_momdp/msg/Num.msg" NAME_WE)
add_dependencies(rosplan_momdp_generate_messages_py _rosplan_momdp_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/ys/MOMDP_DESPOT/ROSPlan/src/rosplan_momdp/srv/AddTwoInts.srv" NAME_WE)
add_dependencies(rosplan_momdp_generate_messages_py _rosplan_momdp_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(rosplan_momdp_genpy)
add_dependencies(rosplan_momdp_genpy rosplan_momdp_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS rosplan_momdp_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/rosplan_momdp)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/rosplan_momdp
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(rosplan_momdp_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/rosplan_momdp)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/rosplan_momdp
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(rosplan_momdp_generate_messages_eus std_msgs_generate_messages_eus)
endif()

if(genjava_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genjava_INSTALL_DIR}/rosplan_momdp)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genjava_INSTALL_DIR}/rosplan_momdp
    DESTINATION ${genjava_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_java)
  add_dependencies(rosplan_momdp_generate_messages_java std_msgs_generate_messages_java)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/rosplan_momdp)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/rosplan_momdp
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(rosplan_momdp_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/rosplan_momdp)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/rosplan_momdp
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(rosplan_momdp_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/rosplan_momdp)
  install(CODE "execute_process(COMMAND \"/usr/bin/python\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/rosplan_momdp\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/rosplan_momdp
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(rosplan_momdp_generate_messages_py std_msgs_generate_messages_py)
endif()
