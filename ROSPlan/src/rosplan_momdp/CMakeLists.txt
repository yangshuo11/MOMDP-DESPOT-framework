cmake_minimum_required(VERSION 2.8.3)
project(rosplan_momdp)


find_package(Despot CONFIG REQUIRED)

find_package(catkin REQUIRED COMPONENTS 
	roscpp 
	rospy 
	std_msgs 
	std_srvs 
	message_generation
	)

add_message_files(FILES 
	Num.msg
	)

add_service_files(FILES 
	AddTwoInts.srv
	)


generate_messages(DEPENDENCIES 
	std_msgs
	)


catkin_package(
	INCLUDE_DIRS include ${catkin_INCLUDE_DIRS}
	CATKIN_DEPENDS roscpp rospy std_msgs std_srvs message_runtime
	DEPENDS
	)




include_directories(include ${catkin_INCLUDE_DIRS} )
link_directories(${catkin_LIB_DIRS} lib)

#add_executable(PDDLMOMDPnode src/PDDLMOMDP.cpp)
#target_link_libraries(PDDLMOMDPnode ${catkin_LIBRARIES} libappl.a)
#add_dependencies(PDDLMOMDPnode rosplan_momdp_generate_messages_cpp)

#add_executable(pomdpsol src/OfflineSolver/solver.cpp)
#target_link_libraries(pomdpsol ${catkin_LIBRARIES} libappl.a)
#add_dependencies(pomdpsol rosplan_momdp_generate_message_cpp)

#add_executable(pomdpsim src/Simulator/Simulator.cpp)
#target_link_libraries(pomdpsim ${catkin_LIBRARIES} libappl.a)
#add_dependencies(pomdpsim rosplan_momdp_generate_message_cpp)

#add_executable(poLgraph src/PolicyGraph/PolicyGraph.cpp)
#target_link_libraries(poLgraph ${catkin_LIBRARIES} libappl.a)
#add_dependencies(poLgraph rosplan_momdp_generate_message_cpp)

add_executable(rosplan_momdp src/DespotSol.cpp)
target_link_libraries(rosplan_momdp ${catkin_LIBRARIES} despot)
add_dependencies(rosplan_momdp rosplan_momdp_generate_message_cpp)

#add_executable(talker src/talker.cpp)
#target_link_libraries(talker ${catkin_LIBRARIES} libappl.a)
#add_dependencies(talker rosplan_momdp_generate_messages_cpp)


#add_executable(listener src/listener.cpp)
#target_link_libraries(listener ${catkin_LIBRARIES} libappl.a)
#add_dependencies(listener rosplan_momdp_generate_messages_cpp)

#add_executable(add_two_ints_server src/add_two_ints_server.cpp)
#target_link_libraries(add_two_ints_server ${catkin_LIBRARIES} libappl.a)
#add_dependencies(add_two_ints_server rosplan_momdp_gencpp)



#target_link_libraries(rosplan_momdp libappl.a)


##add_executable(add_two_ints_client src/add_two_ints_client.cpp)
##target_link_libraries(add_two_ints_client ${catkin_LIBRARIES})
##add_dependencies(add_two_ints_client rosplan_momdp_gencpp)
