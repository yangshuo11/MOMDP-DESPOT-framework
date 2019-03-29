package rosplan_knowledge_msgs;

public interface CreatePRMResponse extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_knowledge_msgs/CreatePRMResponse";
  static final java.lang.String _DEFINITION = "string[] waypoints";
  java.util.List<java.lang.String> getWaypoints();
  void setWaypoints(java.util.List<java.lang.String> value);
}
