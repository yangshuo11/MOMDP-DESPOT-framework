package rosplan_dispatch_msgs;

public interface ParsingServiceResponse extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_dispatch_msgs/ParsingServiceResponse";
  static final java.lang.String _DEFINITION = "bool plan_parsed";
  boolean getPlanParsed();
  void setPlanParsed(boolean value);
}
