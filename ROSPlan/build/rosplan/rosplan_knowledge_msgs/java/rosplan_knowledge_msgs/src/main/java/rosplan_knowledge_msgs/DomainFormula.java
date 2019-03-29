package rosplan_knowledge_msgs;

public interface DomainFormula extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_knowledge_msgs/DomainFormula";
  static final java.lang.String _DEFINITION = "# A message used to represent an atomic formula from the domain.\n# typed_parameters matches label -> type\nstring name\ndiagnostic_msgs/KeyValue[] typed_parameters\n";
  java.lang.String getName();
  void setName(java.lang.String value);
  java.util.List<diagnostic_msgs.KeyValue> getTypedParameters();
  void setTypedParameters(java.util.List<diagnostic_msgs.KeyValue> value);
}
