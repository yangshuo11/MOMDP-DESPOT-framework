package rosplan_knowledge_msgs;

public interface GetDomainPredicateDetailsServiceRequest extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_knowledge_msgs/GetDomainPredicateDetailsServiceRequest";
  static final java.lang.String _DEFINITION = "# Fetching the Domain (1.5/3):\n# Get all details of a specific predicate in the domain.\nstring name\n";
  java.lang.String getName();
  void setName(java.lang.String value);
}
