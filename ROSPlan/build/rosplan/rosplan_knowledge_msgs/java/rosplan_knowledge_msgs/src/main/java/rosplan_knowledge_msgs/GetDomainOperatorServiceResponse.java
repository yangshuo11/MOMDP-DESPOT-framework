package rosplan_knowledge_msgs;

public interface GetDomainOperatorServiceResponse extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_knowledge_msgs/GetDomainOperatorServiceResponse";
  static final java.lang.String _DEFINITION = "rosplan_knowledge_msgs/DomainFormula[] operators";
  java.util.List<rosplan_knowledge_msgs.DomainFormula> getOperators();
  void setOperators(java.util.List<rosplan_knowledge_msgs.DomainFormula> value);
}
