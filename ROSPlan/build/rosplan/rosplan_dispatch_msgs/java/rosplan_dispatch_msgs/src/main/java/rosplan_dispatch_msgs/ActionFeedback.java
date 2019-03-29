package rosplan_dispatch_msgs;

public interface ActionFeedback extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_dispatch_msgs/ActionFeedback";
  static final java.lang.String _DEFINITION = "#actionFeedback message\nint32 action_id\nstring status\ndiagnostic_msgs/KeyValue[] information\n";
  int getActionId();
  void setActionId(int value);
  java.lang.String getStatus();
  void setStatus(java.lang.String value);
  java.util.List<diagnostic_msgs.KeyValue> getInformation();
  void setInformation(java.util.List<diagnostic_msgs.KeyValue> value);
}
