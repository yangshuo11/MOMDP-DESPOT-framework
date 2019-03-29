package rosplan_dispatch_msgs;

public interface PlanningService extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_dispatch_msgs/PlanningService";
  static final java.lang.String _DEFINITION = "# starts the planning and dispatch\nstring domain_path\nstring problem_path\nstring data_path\nstring planner_command\nbool use_problem_topic\n---\nbool plan_found\n";
}
