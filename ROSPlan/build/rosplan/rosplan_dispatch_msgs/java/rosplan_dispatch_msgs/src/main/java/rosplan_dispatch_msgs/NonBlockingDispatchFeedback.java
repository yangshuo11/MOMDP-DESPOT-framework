package rosplan_dispatch_msgs;

public interface NonBlockingDispatchFeedback extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_dispatch_msgs/NonBlockingDispatchFeedback";
  static final java.lang.String _DEFINITION = "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n#feedback definition\nrosplan_dispatch_msgs/ActionFeedback feedback";
  rosplan_dispatch_msgs.ActionFeedback getFeedback();
  void setFeedback(rosplan_dispatch_msgs.ActionFeedback value);
}
