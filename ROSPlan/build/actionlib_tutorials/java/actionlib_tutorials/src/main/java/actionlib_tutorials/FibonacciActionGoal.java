package actionlib_tutorials;

public interface FibonacciActionGoal extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "actionlib_tutorials/FibonacciActionGoal";
  static final java.lang.String _DEFINITION = "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\nHeader header\nactionlib_msgs/GoalID goal_id\nactionlib_tutorials/FibonacciGoal goal";
  std_msgs.Header getHeader();
  void setHeader(std_msgs.Header value);
  actionlib_msgs.GoalID getGoalId();
  void setGoalId(actionlib_msgs.GoalID value);
  actionlib_tutorials.FibonacciGoal getGoal();
  void setGoal(actionlib_tutorials.FibonacciGoal value);
}
