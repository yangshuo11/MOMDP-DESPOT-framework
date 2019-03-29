package rosplan_knowledge_msgs;

public interface GetDomainOperatorDetailsServiceRequest extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_knowledge_msgs/GetDomainOperatorDetailsServiceRequest";
  static final java.lang.String _DEFINITION = "# Fetching the Domain (2.5/3):\n# Get all details of a specific operator in the domain.\nstring name\n";
  java.lang.String getName();
  void setName(java.lang.String value);
}
