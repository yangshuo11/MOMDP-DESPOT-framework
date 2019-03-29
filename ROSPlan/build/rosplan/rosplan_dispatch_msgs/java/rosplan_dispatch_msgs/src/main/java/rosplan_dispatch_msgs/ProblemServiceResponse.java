package rosplan_dispatch_msgs;

public interface ProblemServiceResponse extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_dispatch_msgs/ProblemServiceResponse";
  static final java.lang.String _DEFINITION = "bool problem_generated\nstring problem_string";
  boolean getProblemGenerated();
  void setProblemGenerated(boolean value);
  java.lang.String getProblemString();
  void setProblemString(java.lang.String value);
}
