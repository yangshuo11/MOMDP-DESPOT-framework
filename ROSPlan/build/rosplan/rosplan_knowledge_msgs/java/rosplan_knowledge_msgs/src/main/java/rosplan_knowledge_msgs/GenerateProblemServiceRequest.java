package rosplan_knowledge_msgs;

public interface GenerateProblemServiceRequest extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_knowledge_msgs/GenerateProblemServiceRequest";
  static final java.lang.String _DEFINITION = "# simple service for generating a PDDL problem with goals from the KMS\nstring problem_path\nbool contingent\n";
  java.lang.String getProblemPath();
  void setProblemPath(java.lang.String value);
  boolean getContingent();
  void setContingent(boolean value);
}
