package rosplan_knowledge_msgs;

public interface KnowledgeQueryServiceRequest extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_knowledge_msgs/KnowledgeQueryServiceRequest";
  static final java.lang.String _DEFINITION = "rosplan_knowledge_msgs/KnowledgeItem[] knowledge\n";
  java.util.List<rosplan_knowledge_msgs.KnowledgeItem> getKnowledge();
  void setKnowledge(java.util.List<rosplan_knowledge_msgs.KnowledgeItem> value);
}
