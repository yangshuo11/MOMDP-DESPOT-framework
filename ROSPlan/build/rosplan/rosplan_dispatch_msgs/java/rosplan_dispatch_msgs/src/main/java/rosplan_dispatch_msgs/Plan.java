package rosplan_dispatch_msgs;

public interface Plan extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_dispatch_msgs/Plan";
  static final java.lang.String _DEFINITION = "# Planning action definition\n# goal definition\nstring domain_path\nstring problem_path\nstring data_path\nstring planner_command\nbool use_problem_topic\nuint64 start_action_id\n---\n# result definition\nstring result_status\n---\n# feedback definition\nstring current_phase\nstring current_status\nint32 percent_completed\n\n";
}
