package rosplan_knowledge_msgs;

public interface GetInstanceServiceRequest extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_knowledge_msgs/GetInstanceServiceRequest";
  static final java.lang.String _DEFINITION = "# PDDL problem generation; service(1/2):\n# Get all instances of the type with the name \'typeName\'.\nstring type_name\n";
  java.lang.String getTypeName();
  void setTypeName(java.lang.String value);
}
