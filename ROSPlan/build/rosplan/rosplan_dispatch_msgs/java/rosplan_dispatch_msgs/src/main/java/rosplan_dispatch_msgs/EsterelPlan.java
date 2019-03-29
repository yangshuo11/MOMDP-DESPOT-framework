package rosplan_dispatch_msgs;

public interface EsterelPlan extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_dispatch_msgs/EsterelPlan";
  static final java.lang.String _DEFINITION = "#EsterelPlan message\nEsterelPlanNode[] nodes\nEsterelPlanEdge[] edges\n";
  java.util.List<rosplan_dispatch_msgs.EsterelPlanNode> getNodes();
  void setNodes(java.util.List<rosplan_dispatch_msgs.EsterelPlanNode> value);
  java.util.List<rosplan_dispatch_msgs.EsterelPlanEdge> getEdges();
  void setEdges(java.util.List<rosplan_dispatch_msgs.EsterelPlanEdge> value);
}
