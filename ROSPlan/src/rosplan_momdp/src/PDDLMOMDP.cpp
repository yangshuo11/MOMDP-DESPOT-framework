#include "rosplan_momdp/PDDLMOMDP.h"
#include "rosplan_knowledge_msgs/GetDomainNameService.h"
#include "rosplan_knowledge_msgs/GetDomainAttributeService.h"
#include "rosplan_knowledge_msgs/GetDomainOperatorDetailsService.h"
#include "rosplan_knowledge_msgs/GetDomainOperatorService.h"
#include "rosplan_knowledge_msgs/GetDomainTypeService.h"
#include "rosplan_knowledge_msgs/GetInstanceService.h"
#include "rosplan_knowledge_msgs/GetAttributeService.h"
#include "rosplan_knowledge_msgs/KnowledgeQueryService.h"
#include "rosplan_knowledge_msgs/KnowledgeUpdateService.h"
#include <string>
//sarsop
#include "rosplan_momdp/Controller/Controller.h"
#include "rosplan_momdp/OfflineSolver/GlobalResource.h"
#include "rosplan_momdp/Models/MOMDP/MOMDP.h"
#include "rosplan_momdp/Parser/ParserSelector.h"
#include "rosplan_momdp/Bounds/AlphaVectorPolicy.h"
#include <iostream>
using namespace std;


PDDLMOMDP::PDDLMOMDP(ros::NodeHandle& nh){
	node_handle = &nh;
}

// void PDDLMOMDP::problemInstanceCallback(const std_msgs::String::ConstPtr& problemInstance){
// 	ROS_INFO("(%s) Problem received.", ros::this_node::getName().c_str());
// 	problem_instance_received = true;
// 	//problem_instance_time = ros::WallTime()::now().toSec();
// 	problem_instance = problemInstance->data.c_str();
// 	ROS_INFO("variable assigned: [%s]", problem_instance);

// }



void PDDLMOMDP::problemInstanceCallback(const std_msgs::String::ConstPtr& msg){
	//ROS_INFO("Get the problem instance: [%s]", msg->data.c_str());
	problem_instance = msg;
	ROS_INFO("problem instance: [%s]", problem_instance->data.c_str());
}

void PDDLMOMDP::planCallback(const std_msgs::String::ConstPtr& msg){
	//ROS_INFO("Get the problem instance: [%s]", msg->data.c_str());
	plan_instance = msg;
	ROS_INFO("plan instance: [%s]", plan_instance->data.c_str());
}

// Usage: "./testController --policy-file=out.policy
// ../examples/POMDPX/Tiger.pomdpx"

int main(int argc, char **argv)
{





	srand(static_cast<unsigned>(time(0)));
	ros::init(argc,argv,"rosplan_momdp_node");
	ros::NodeHandle nh("~");

	PDDLMOMDP node(nh);

	std::string problemTopic = "/rosplan_problem_interface/problem_instance";
	std::string planTopic = "/rosplan_planner_interface/planner_output";
	std::string completePlanTopic = "";
	nh.getParam("problem_topic", problemTopic);

	//subscribe to problem topic
	ros::Subscriber problem_sub = nh.subscribe(problemTopic, 1, &PDDLMOMDP::problemInstanceCallback, dynamic_cast<PDDLMOMDP*>(&node));
	
	//subscribe to plan topic
	ros::Subscriber plan_sub = nh.subscribe(planTopic, 1, &PDDLMOMDP::planCallback, dynamic_cast<PDDLMOMDP*>(&node));

	//generate problem
	ros::ServiceClient problemGenerationClient = nh.serviceClient<std_srvs::Empty>("/rosplan_problem_interface/problem_generation_server");
	
	//generate plan
	ros::ServiceClient planOutputClient = nh.serviceClient<std_srvs::Empty>("/rosplan_planner_interface/planning_server");

	//get domain info
	ros::ServiceClient domainNameClient = nh.serviceClient<rosplan_knowledge_msgs::GetDomainNameService>("/rosplan_knowledge_base/domain/name");
	//ros::ServiceClient domainFunctionsClient = nh.serviceClient<rosplan_knowledge_msgs::GetDomainAttributeService>("/rosplan_knowledge_base/domain/functions");
	ros::ServiceClient domainOperatorsClient = nh.serviceClient<rosplan_knowledge_msgs::GetDomainOperatorService>("/rosplan_knowledge_base/domain/operators");
	ros::ServiceClient domainOpsDetailsClient = nh.serviceClient<rosplan_knowledge_msgs::GetDomainOperatorDetailsService>("/rosplan_knowledge_base/domain/operator_details");
	ros::ServiceClient domainPredicatesClient = nh.serviceClient<rosplan_knowledge_msgs::GetDomainAttributeService>("/rosplan_knowledge_base/domain/predicates");
	//ros::ServiceClient domainPredDetailsClient = nh.serviceClient<rosplan_knowledge_msgs::GetDomainPredicateDetailsService>("/rosplan_knowledge_base/domain/predicate_details");
	ros::ServiceClient domainTypesClient = nh.serviceClient<rosplan_knowledge_msgs::GetDomainTypeService>("/rosplan_knowledge_base/domain/types");

	//get state info
	
	ros::ServiceClient stateInstancesClient = nh.serviceClient<rosplan_knowledge_msgs::GetInstanceService>("/rosplan_knowledge_base/state/instances"); //Args: type_name
	ros::ServiceClient statePropositionsClient = nh.serviceClient<rosplan_knowledge_msgs::GetAttributeService>("/rosplan_knowledge_base/state/propositions"); //Args: predicate_name
	ros::ServiceClient stateGoalsClient = nh.serviceClient<rosplan_knowledge_msgs::GetAttributeService>("/rosplan_knowledge_base/state/goals"); //Args: predicate_name	
	ros::ServiceClient stateQueryClient = nh.serviceClient<rosplan_knowledge_msgs::KnowledgeQueryService>("/rosplan_knowledge_base/query_state"); //Args: knowledge

	//ros::ServiceClient stateFunctionsClient = nh.serviceClient<rosplan_knowledge_msgs::GetAttributeService>("/rosplan_knowledge_base/state/functions"); //Args: predicate_name
	//ros::ServiceClient stateMetricClient = nh.serviceClient<rosplan_knowledge_msgs::GetMetricService>("/rosplan_knowledge_base/state/metric"); //Args: null
	//ros::ServiceClient stateTimedKnowledgeClient = nh.serviceClient<rosplan_knowledge_msgs::GetAttributeService>("/rosplan_knowledge_base/state/timed_knowledge"); //Args: predicate_name

	//update knowledge info
	ros::ServiceClient updateClient = nh.serviceClient<rosplan_knowledge_msgs::KnowledgeUpdateService>("/rosplan_knowledge_base/update"); //Args: update_type knowledge
	//ros::ServiceClient updateArrayClient = nh.serviceClient<rosplan_knowledge_msgs::KnowledgeUpdateServiceArray>("/rosplan_knowledge_base/update_array"); //Args: update_type knowledge
	//ros::ServiceClient updateConstraintOneofClient = nh.serviceClient<rosplan_knowledge_msgs::KnowledgeUpdateServiceArray>("/rosplan_knowledge_base/update_constraints_oneof"); //Args: update_type knowledge
	//ros::ServiceClient updateSensedPredicatesClient = nh.serviceClient<rosplan_knowledge_msgs::SetNamedBool>("/rosplan_knowledge_base/update_sensed_predicates"); //Args: name value


	// declare service types
	std_srvs::Empty emptySrv;
	rosplan_knowledge_msgs::GetDomainNameService getDomainNameSrv;
	rosplan_knowledge_msgs::GetDomainAttributeService getDomainAttributeSrv;
	rosplan_knowledge_msgs::GetDomainOperatorDetailsService getDomainOperatorDetailsSrv;
	rosplan_knowledge_msgs::GetDomainOperatorService getDomainOperatorSrv;
	rosplan_knowledge_msgs::GetDomainTypeService getDomainTypeSrv;
	rosplan_knowledge_msgs::KnowledgeUpdateService knowledgeUpdateSrv;
	rosplan_knowledge_msgs::KnowledgeQueryService knowledgeQuerySrv;

	getDomainOperatorDetailsSrv.request.name = "goto_waypoint";

	rosplan_knowledge_msgs::GetInstanceService getInstanceSrv;
	rosplan_knowledge_msgs::GetAttributeService getAttributeSrv;

	
	problemGenerationClient.waitForExistence();
	domainNameClient.waitForExistence();
	//domainFunctionsClient.waitForExistence();
	domainOpsDetailsClient.waitForExistence();
	domainOperatorsClient.waitForExistence();
	domainPredicatesClient.waitForExistence();
	domainTypesClient.waitForExistence();

	stateInstancesClient.waitForExistence();
	statePropositionsClient.waitForExistence();
	updateClient.waitForExistence();
	stateQueryClient.waitForExistence();


	//planOutputClient.waitForExistence();
  	if (problemGenerationClient.call(emptySrv))
  	{
  		ROS_INFO("successfully call the service: problem_generation_server");
  		// while (!problem_instance) {
  		// 	ros::spinOnce();
  		// }
  		// if (planOutputClient.call(srv)) 
  		// {
  		if (domainNameClient.call(getDomainNameSrv))
  		{
  			ROS_INFO("/rosplan_knowledge_base/domain/name reply from: [%s]", getDomainNameSrv.response.domain_name.c_str());
  		}

  		if (domainOpsDetailsClient.call(getDomainOperatorDetailsSrv))
  		{
  			std::vector<diagnostic_msgs::KeyValue> opParams = getDomainOperatorDetailsSrv.response.op.formula.typed_parameters;
  			std::string opName = getDomainOperatorDetailsSrv.response.op.formula.name;
  			ROS_INFO("/rosplan_knowledge_base/domain/opsName-print key: [%s]", opName.c_str());

			for(size_t i=0; i<opParams.size(); i++) {
				ROS_INFO("/rosplan_knowledge_base/domain/opsDetails-print key: [%s]", opParams[i].key.c_str());
			}

  		}

  		if (domainOperatorsClient.call(getDomainOperatorSrv))
  		{
  			std::vector<rosplan_knowledge_msgs::DomainFormula> ops = getDomainOperatorSrv.response.operators;

  			for (size_t i=0; i < ops.size(); i++) {
  				std::string opName = ops[i].name;
  				ROS_INFO("operator name: [%s]", opName.c_str());

  				std::vector<diagnostic_msgs::KeyValue> opParams = ops[i].typed_parameters;

  				for (size_t j=0; j < opParams.size(); j++) {
  					ROS_INFO("operator key: [%s]", opParams[j].key.c_str());
  					ROS_INFO("operator value: [%s]", opParams[j].value.c_str());
  				}
  			}
  		}

  		if (domainPredicatesClient.call(getDomainAttributeSrv))
  		{
  			std::vector<rosplan_knowledge_msgs::DomainFormula> predicateItems = getDomainAttributeSrv.response.items;

  			for (size_t i=0; i < predicateItems.size(); i++) {
  				std::string predicateName = predicateItems[i].name;
  				ROS_INFO("predicate name: [%s]", predicateName.c_str());

  				std::vector<diagnostic_msgs::KeyValue> predicateParams = predicateItems[i].typed_parameters;

  				for (size_t j=0; j < predicateParams.size(); j++) {
  					ROS_INFO("predicate key: [%s]", predicateParams[j].key.c_str());
  					ROS_INFO("predicate value: [%s]", predicateParams[j].value.c_str());
  				}
  			}

  		}

  		if (domainTypesClient.call(getDomainTypeSrv))
  		{
  			std::vector<std::string> types = getDomainTypeSrv.response.types;
  			std::vector<std::string> super_types = getDomainTypeSrv.response.super_types;

  			for (size_t i=0; i < types.size(); i++){
  				ROS_INFO("types: [%s]", types[i].c_str());
  			}

  			for (size_t i=0; i < super_types.size(); i++) {
  				ROS_INFO("super_types: [%s]", super_types[i].c_str());
  			}

  		}


  		//state instance info

  		getInstanceSrv.request.type_name = "waypoint";

  		if (stateInstancesClient.call(getInstanceSrv))
  		{	
  			std::vector<std::string> instances = getInstanceSrv.response.instances;
  			for (size_t i=0; i < instances.size(); i++) {
  				ROS_INFO("instance: [%s]", instances[i].c_str());
  			}

  		}

  		//predicate proposition info

  		getAttributeSrv.request.predicate_name = "robot_at";
  		if (statePropositionsClient.call(getAttributeSrv)) 
  		{
  			std::vector<rosplan_knowledge_msgs::KnowledgeItem> attributes = getAttributeSrv.response.attributes;

  			for (size_t i=0; i < attributes.size(); i++) {
  				rosplan_knowledge_msgs::KnowledgeItem attr = attributes[i];

  				ROS_INFO("knowledge_type: [%d]", attr.knowledge_type);
  				ROS_INFO("attribute_name: [%s]", attr.attribute_name.c_str());
  				ROS_INFO("is_negative: [%d]", attr.is_negative);

  				for (size_t j=0; j < attr.values.size(); j++) {
  					ROS_INFO("key: [%s]", attr.values[j].key.c_str());
  					ROS_INFO("value: [%s]", attr.values[j].value.c_str());
  				}
  			}
  		}

  		//goal info

  		// getAttributeSrv.request.predicate_name = "";
  		// if (stateGoalsClient.call(getAttributeSrv)) 
  		// {
  		// 	std::vector<rosplan_knowledge_msgs::KnowledgeItem> attributes = getAttributeSrv.response.attributes;
  		// 	for (size_t i=0; i < attributes.size(); i++)
  		// 	{
  		// 		rosplan_knowledge_msgs::KnowledgeItem attr = attributes[i];
  		// 		ROS_INFO("knowledge_type: [%d]", attr.knowledge_type);
  		// 		if (attr.knowledge_type == rosplan_knowledge_msgs::KnowledgeItem::FACT){

  		// 		}

  		// 	}

  		// }

  		//update knowledge base
  		rosplan_knowledge_msgs::KnowledgeItem knowledgeItem;
  		knowledgeItem.knowledge_type = 0;
  		knowledgeItem.instance_type = "robot";
  		knowledgeItem.instance_name = "kenny";
  		knowledgeUpdateSrv.request.update_type = 0;
  		knowledgeUpdateSrv.request.knowledge = knowledgeItem;
  		if (updateClient.call(knowledgeUpdateSrv))
  		{
  			ROS_INFO("success or failure: [%d]", knowledgeUpdateSrv.response.success);
  		}

  		//query knowledge

  		std::vector<rosplan_knowledge_msgs::KnowledgeItem> requestKnowledges;
  		rosplan_knowledge_msgs::KnowledgeItem requestKnowledgeItem;
  		requestKnowledgeItem.knowledge_type = 1;
  		requestKnowledgeItem.attribute_name = "robot_at";
  		diagnostic_msgs::KeyValue element;
  		element.key = "kenny";
  		element.value = "wp0";
  		requestKnowledgeItem.values.push_back(element);

  		requestKnowledges.push_back(requestKnowledgeItem);
  		knowledgeQuerySrv.request.knowledge = requestKnowledges;

  		if (stateQueryClient.call(knowledgeQuerySrv)) {
  			ROS_INFO("query reply");
  			ROS_INFO("query reply: [%d]", knowledgeQuerySrv.response.all_true);

  		}

  		//ros::spin();
  	} else {
  		ROS_ERROR("Failed to call service");
  		//return 1;
  	}


  	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




	// MOMDP TestController
    SolverParams* p = &GlobalResource::getInstance()->solverParams;
    bool parseCorrect = SolverParams::parseCommandLineOption(argc, argv, *p);

    if (p->policyFile == "") {
        cout<<"Invalid params\n";
        return 0;
    }

    cout<<"\nLoading the model ...\n   ";
    SharedPointer<MOMDP> problem = ParserSelector::loadProblem(p->problemName, *p);

    SharedPointer<AlphaVectorPolicy> policy = new AlphaVectorPolicy(problem);

    cout<<"\nLoading the policy ... input file : "<<p->policyFile<<"\n";
    bool policyRead = policy->readFromFile(p->policyFile);

    if (p->useLookahead) {
        cout<<"   action selection : one-step look ahead\n";
    }

    Controller control(problem, policy, p, -1);

    cout<<"\nInitialized the controller\n";

    // In the Tiger problem, X = 0
    // dummy obs for first action
    int firstAction = control.nextAction(1, 0);
    cout<<"\nFirst action : "<<firstAction<<endl;

    // obs-left
    int action = control.nextAction(0, 0);
    cout<<"Obs-left => Action : "<<action<<endl;
    // obs-left => open right
    action = control.nextAction(0, 0);
    cout<<"Obs-left => Action : "<<action<<endl;
    // reset
    action = control.nextAction(1, 0);
    cout<<"\nReset ...\nFirst action : "<<action<<endl;
    // obs-right
    action = control.nextAction(1, 0);
    cout<<"Obs-right => Action : "<<action<<endl;
    // obs-right => open left
    action = control.nextAction(1, 0);
    cout<<"Obs-right => Action : "<<action<<endl;

    return 0;
}



