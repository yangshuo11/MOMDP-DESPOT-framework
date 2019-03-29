#include "ros/ros.h"
#include "std_msgs/String.h"
#include "std_srvs/Empty.h"
#include "rosplan_knowledge_msgs/GetDomainNameService.h"
#include "rosplan_knowledge_msgs/GetDomainAttributeService.h"
#include "rosplan_knowledge_msgs/GetDomainOperatorDetailsService.h"
#include "rosplan_knowledge_msgs/GetDomainOperatorService.h"
#include <string>
#include <iostream>



class PDDLMOMDP
{
private:
protected:
	ros::NodeHandle* node_handle;
	//std_msgs::String problem_instance;
	std_msgs::String::ConstPtr problem_instance;
	std_msgs::String::ConstPtr plan_instance;
	bool problem_instance_received;
	double problem_instance_time;
public:
	PDDLMOMDP(ros::NodeHandle& nh);
	void problemInstanceCallback(const std_msgs::String::ConstPtr& msg);
	void planCallback(const std_msgs::String::ConstPtr& msg);

};