package rosplan_knowledge_msgs;

public interface GetDomainAttributeServiceResponse extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_knowledge_msgs/GetDomainAttributeServiceResponse";
  static final java.lang.String _DEFINITION = "rosplan_knowledge_msgs/DomainFormula[] items";
  java.util.List<rosplan_knowledge_msgs.DomainFormula> getItems();
  void setItems(java.util.List<rosplan_knowledge_msgs.DomainFormula> value);
}
