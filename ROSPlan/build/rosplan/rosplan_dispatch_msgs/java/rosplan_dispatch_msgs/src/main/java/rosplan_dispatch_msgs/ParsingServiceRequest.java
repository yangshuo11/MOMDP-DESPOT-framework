package rosplan_dispatch_msgs;

public interface ParsingServiceRequest extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_dispatch_msgs/ParsingServiceRequest";
  static final java.lang.String _DEFINITION = "# parses a plan from a file\nstring plan_path\n";
  java.lang.String getPlanPath();
  void setPlanPath(java.lang.String value);
}
