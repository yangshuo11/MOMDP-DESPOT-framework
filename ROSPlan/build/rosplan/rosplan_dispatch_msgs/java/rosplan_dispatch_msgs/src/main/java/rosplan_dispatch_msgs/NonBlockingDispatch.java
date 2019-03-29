package rosplan_dispatch_msgs;

public interface NonBlockingDispatch extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_dispatch_msgs/NonBlockingDispatch";
  static final java.lang.String _DEFINITION = "std_msgs/Empty req\n---\nbool success # True if the dispatch was successful\nbool goal_achieved # True if the goal is achieved after the dispatching\n---\nrosplan_dispatch_msgs/ActionFeedback feedback\n";
}
