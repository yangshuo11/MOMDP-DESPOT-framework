package rosplan_knowledge_msgs;

public interface SetNamedBoolRequest extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_knowledge_msgs/SetNamedBoolRequest";
  static final java.lang.String _DEFINITION = "string name\nbool value\n";
  java.lang.String getName();
  void setName(java.lang.String value);
  boolean getValue();
  void setValue(boolean value);
}
