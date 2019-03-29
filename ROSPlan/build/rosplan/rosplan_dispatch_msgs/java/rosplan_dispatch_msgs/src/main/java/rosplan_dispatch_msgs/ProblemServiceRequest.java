package rosplan_dispatch_msgs;

public interface ProblemServiceRequest extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_dispatch_msgs/ProblemServiceRequest";
  static final java.lang.String _DEFINITION = "# request a problem to be generated in the problem_path\nstring problem_path\nbool problem_string_response\n";
  java.lang.String getProblemPath();
  void setProblemPath(java.lang.String value);
  boolean getProblemStringResponse();
  void setProblemStringResponse(boolean value);
}
