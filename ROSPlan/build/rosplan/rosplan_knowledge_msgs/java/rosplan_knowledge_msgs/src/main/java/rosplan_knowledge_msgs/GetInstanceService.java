package rosplan_knowledge_msgs;

public interface GetInstanceService extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_knowledge_msgs/GetInstanceService";
  static final java.lang.String _DEFINITION = "# PDDL problem generation; service(1/2):\n# Get all instances of the type with the name \'typeName\'.\nstring type_name\n---\nstring[] instances\n";
}
