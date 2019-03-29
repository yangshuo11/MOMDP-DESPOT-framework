package rosplan_knowledge_msgs;

public interface GetRDDLParamsResponse extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_knowledge_msgs/GetRDDLParamsResponse";
  static final java.lang.String _DEFINITION = "int32 horizon\nfloat32 discount_factor\nint32 max_nondef_actions";
  int getHorizon();
  void setHorizon(int value);
  float getDiscountFactor();
  void setDiscountFactor(float value);
  int getMaxNondefActions();
  void setMaxNondefActions(int value);
}
