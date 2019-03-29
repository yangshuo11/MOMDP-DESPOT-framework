#include <despot/simple_tui.h>
#include <despot/pomdpx/pomdpx.h>
#include "rosplan_momdp/DespotSol.h"
#include <iostream>
#include <unistd.h>


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

using namespace std;
using namespace despot;

class TUI: public SimpleTUI {
public:


  TUI() {
  }

  DSPOMDP* InitializeModel(option::Option* options) {
    DSPOMDP* model = NULL;
    if (options[E_PARAMS_FILE]) {
        model = new POMDPX(options[E_PARAMS_FILE].arg);
    } else {
      cerr << "ERROR: Specify a POMDPX model file name using -m!" << endl;
      exit(0);
    }
    return model;
  }
  
  void InitializeDefaultParameters() {
  }


};


DespotSol::DespotSol(ros::NodeHandle& nh) {

  node_handle = &nh;

  std::string informationActionTopic = "/MOMDP/PDDL/InforAction";

  inforAction_instance.data = "490.009: (turnangle0 kenny wp1)  [60.000]";

  node_handle->getParam("informationAction_topic", informationActionTopic);
  
  informationAction_publisher = node_handle->advertise<std_msgs::String>(informationActionTopic, 1, true);
}

void DespotSol::taskActionCallback(const rosplan_dispatch_msgs::ActionDispatch::ConstPtr& msg) {
  taskAction_instance = msg;

  ROS_INFO("MOMDP: (%s) received", msg->name.c_str());

  informationAction_publisher.publish(inforAction_instance);


}



int main(int argc, char* argv[]) {

 // ros::init(argc,argv,"rosplan_despot_node");
 // ros::NodeHandle nh("~");

 // DespotSol node(nh);

  srand(static_cast<unsigned>(time(0)));
  ros::init(argc, argv, "rosplan_despotsol_node");
  
  ros::NodeHandle nh("~");

  DespotSol node(nh);

  std::string taskActionFinishedTopic = "/MOMDP/ExecutedTaskAction";
  nh.getParam("taskAction_topic", taskActionFinishedTopic);

  ros::Subscriber taskAction_sub = nh.subscribe(taskActionFinishedTopic, 1, &DespotSol::taskActionCallback, dynamic_cast<DespotSol*>(&node));

  ROS_INFO("MOMDP: (%s) Ready to receive", ros::this_node::getName().c_str());
  
  // std::vector<int> actionSeq;
  // std::vector<ActionVar> actionVarSeq;


  // TUI proxy = TUI();

  // proxy.run(argc, argv);

  // actionSeq = proxy.GetActionSeq();
  // actionVarSeq = proxy.GetActionVarSeq();

  // std::vector<int>::iterator itr = actionSeq.begin();
  // for (; itr != actionSeq.end(); ++itr) {
  //   cout << "action: " << (*itr) << endl;
  //   cout << "actionVar: " << actionVarSeq[0].GetValue(*itr) << endl;
  // }



  ros::spin();










return 0;


}