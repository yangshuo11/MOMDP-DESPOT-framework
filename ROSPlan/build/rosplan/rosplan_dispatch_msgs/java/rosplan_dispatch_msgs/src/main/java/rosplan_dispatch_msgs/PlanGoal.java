package rosplan_dispatch_msgs;

public interface PlanGoal extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_dispatch_msgs/PlanGoal";
  static final java.lang.String _DEFINITION = "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n#goal definition# Planning action definition\n# goal definition\nstring domain_path\nstring problem_path\nstring data_path\nstring planner_command\nbool use_problem_topic\nuint64 start_action_id\n";
  java.lang.String getDomainPath();
  void setDomainPath(java.lang.String value);
  java.lang.String getProblemPath();
  void setProblemPath(java.lang.String value);
  java.lang.String getDataPath();
  void setDataPath(java.lang.String value);
  java.lang.String getPlannerCommand();
  void setPlannerCommand(java.lang.String value);
  boolean getUseProblemTopic();
  void setUseProblemTopic(boolean value);
  long getStartActionId();
  void setStartActionId(long value);
}
