package rosplan_knowledge_msgs;

public interface GetAttributeService extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_knowledge_msgs/GetAttributeService";
  static final java.lang.String _DEFINITION = "# PDDL problem generation; service(2/3):\n# Get all facts (or functions) by predicate name (or function name).\n# The results are passed as an array of KnowledgeItems\n# The array of initial_time is used for TILs and TIFs not yet active\nstring predicate_name\n---\nrosplan_knowledge_msgs/KnowledgeItem[] attributes\n";
}
