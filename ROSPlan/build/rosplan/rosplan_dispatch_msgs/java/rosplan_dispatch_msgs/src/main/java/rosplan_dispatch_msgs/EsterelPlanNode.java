package rosplan_dispatch_msgs;

public interface EsterelPlanNode extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_dispatch_msgs/EsterelPlanNode";
  static final java.lang.String _DEFINITION = "#EsterelPlanNode message\n\nbyte ACTION_START = 0\nbyte ACTION_END   = 1\nbyte PLAN_START   = 2\n\nbyte node_type\nint32 node_id\nstring name\nrosplan_dispatch_msgs/ActionDispatch action\n\nint32[] edges_out\nint32[] edges_in\n";
  static final byte ACTION_START = 0;
  static final byte ACTION_END = 1;
  static final byte PLAN_START = 2;
  byte getNodeType();
  void setNodeType(byte value);
  int getNodeId();
  void setNodeId(int value);
  java.lang.String getName();
  void setName(java.lang.String value);
  rosplan_dispatch_msgs.ActionDispatch getAction();
  void setAction(rosplan_dispatch_msgs.ActionDispatch value);
  int[] getEdgesOut();
  void setEdgesOut(int[] value);
  int[] getEdgesIn();
  void setEdgesIn(int[] value);
}
