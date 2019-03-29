package rosplan_knowledge_msgs;

public interface GetInstanceServiceResponse extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_knowledge_msgs/GetInstanceServiceResponse";
  static final java.lang.String _DEFINITION = "string[] instances";
  java.util.List<java.lang.String> getInstances();
  void setInstances(java.util.List<java.lang.String> value);
}
