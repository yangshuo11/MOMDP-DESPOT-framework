package rosplan_knowledge_msgs;

public interface KnowledgeQueryServiceResponse extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_knowledge_msgs/KnowledgeQueryServiceResponse";
  static final java.lang.String _DEFINITION = "bool all_true\nbool[] results\nrosplan_knowledge_msgs/KnowledgeItem[] false_knowledge";
  boolean getAllTrue();
  void setAllTrue(boolean value);
  boolean[] getResults();
  void setResults(boolean[] value);
  java.util.List<rosplan_knowledge_msgs.KnowledgeItem> getFalseKnowledge();
  void setFalseKnowledge(java.util.List<rosplan_knowledge_msgs.KnowledgeItem> value);
}
