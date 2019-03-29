package rosplan_dispatch_msgs;

public interface GetPlanningParamsResponse extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_dispatch_msgs/GetPlanningParamsResponse";
  static final java.lang.String _DEFINITION = "string domain_path\nstring problem_path\nbool planner_ready # True if the planner thread is started";
  java.lang.String getDomainPath();
  void setDomainPath(java.lang.String value);
  java.lang.String getProblemPath();
  void setProblemPath(java.lang.String value);
  boolean getPlannerReady();
  void setPlannerReady(boolean value);
}
