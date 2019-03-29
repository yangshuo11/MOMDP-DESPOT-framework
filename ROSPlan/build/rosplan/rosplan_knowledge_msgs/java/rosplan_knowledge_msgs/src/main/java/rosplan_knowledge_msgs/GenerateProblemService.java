package rosplan_knowledge_msgs;

public interface GenerateProblemService extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_knowledge_msgs/GenerateProblemService";
  static final java.lang.String _DEFINITION = "# simple service for generating a PDDL problem with goals from the KMS\nstring problem_path\nbool contingent\n---\nstring message\n";
}
