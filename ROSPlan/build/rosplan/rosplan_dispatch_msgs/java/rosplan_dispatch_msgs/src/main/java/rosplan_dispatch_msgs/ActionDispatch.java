package rosplan_dispatch_msgs;

public interface ActionDispatch extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_dispatch_msgs/ActionDispatch";
  static final java.lang.String _DEFINITION = "#actionDispatch message\nint32 action_id\nstring name\ndiagnostic_msgs/KeyValue[] parameters\nfloat32 duration\nfloat32 dispatch_time\n";
  int getActionId();
  void setActionId(int value);
  java.lang.String getName();
  void setName(java.lang.String value);
  java.util.List<diagnostic_msgs.KeyValue> getParameters();
  void setParameters(java.util.List<diagnostic_msgs.KeyValue> value);
  float getDuration();
  void setDuration(float value);
  float getDispatchTime();
  void setDispatchTime(float value);
}
