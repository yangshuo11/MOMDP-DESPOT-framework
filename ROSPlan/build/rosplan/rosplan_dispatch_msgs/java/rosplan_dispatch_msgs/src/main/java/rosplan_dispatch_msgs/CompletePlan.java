package rosplan_dispatch_msgs;

public interface CompletePlan extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_dispatch_msgs/CompletePlan";
  static final java.lang.String _DEFINITION = "#completePlan message\nActionDispatch[] plan\n";
  java.util.List<rosplan_dispatch_msgs.ActionDispatch> getPlan();
  void setPlan(java.util.List<rosplan_dispatch_msgs.ActionDispatch> value);
}
