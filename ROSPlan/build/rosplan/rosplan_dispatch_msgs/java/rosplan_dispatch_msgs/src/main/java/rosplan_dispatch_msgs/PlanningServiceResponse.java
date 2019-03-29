package rosplan_dispatch_msgs;

public interface PlanningServiceResponse extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_dispatch_msgs/PlanningServiceResponse";
  static final java.lang.String _DEFINITION = "bool plan_found";
  boolean getPlanFound();
  void setPlanFound(boolean value);
}
