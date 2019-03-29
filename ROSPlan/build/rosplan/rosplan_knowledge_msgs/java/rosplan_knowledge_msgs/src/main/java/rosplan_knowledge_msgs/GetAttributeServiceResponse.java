package rosplan_knowledge_msgs;

public interface GetAttributeServiceResponse extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_knowledge_msgs/GetAttributeServiceResponse";
  static final java.lang.String _DEFINITION = "rosplan_knowledge_msgs/KnowledgeItem[] attributes";
  java.util.List<rosplan_knowledge_msgs.KnowledgeItem> getAttributes();
  void setAttributes(java.util.List<rosplan_knowledge_msgs.KnowledgeItem> value);
}
