package rosplan_knowledge_msgs;

public interface GetDomainPredicateDetailsServiceResponse extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_knowledge_msgs/GetDomainPredicateDetailsServiceResponse";
  static final java.lang.String _DEFINITION = "rosplan_knowledge_msgs/DomainFormula predicate\nbool is_sensed";
  rosplan_knowledge_msgs.DomainFormula getPredicate();
  void setPredicate(rosplan_knowledge_msgs.DomainFormula value);
  boolean getIsSensed();
  void setIsSensed(boolean value);
}
