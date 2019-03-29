#include "ros/ros.h"
#include "std_msgs/String.h"
#include "std_srvs/Empty.h"
#include "rosplan_knowledge_msgs/GetDomainNameService.h"
#include "rosplan_knowledge_msgs/GetDomainAttributeService.h"
#include "rosplan_knowledge_msgs/GetDomainOperatorDetailsService.h"
#include "rosplan_knowledge_msgs/GetDomainOperatorService.h"
#include "rosplan_dispatch_msgs/ActionDispatch.h"


#include <string>
#include <iostream>

class DespotSol
{
private:

protected:
	ros::NodeHandle* node_handle;
	rosplan_dispatch_msgs::ActionDispatch::ConstPtr taskAction_instance;
	std_msgs::String inforAction_instance;

public:
  	std::vector<int> actionSeq;

	DespotSol(ros::NodeHandle& nh);
	void problemInstanceCallback(const std_msgs::String::ConstPtr& msg);
	void taskActionCallback(const rosplan_dispatch_msgs::ActionDispatch::ConstPtr& msg);

	ros::Publisher informationAction_publisher;

};