package rosplan_dispatch_msgs;

public interface DispatchServiceResponse extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_dispatch_msgs/DispatchServiceResponse";
  static final java.lang.String _DEFINITION = "bool success # True if the dispatch was successful\nbool goal_achieved # True if the goal is achieved after the dispatching";
  boolean getSuccess();
  void setSuccess(boolean value);
  boolean getGoalAchieved();
  void setGoalAchieved(boolean value);
}
