package rosplan_knowledge_msgs;

public interface GetMetricServiceResponse extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_knowledge_msgs/GetMetricServiceResponse";
  static final java.lang.String _DEFINITION = "rosplan_knowledge_msgs/KnowledgeItem metric";
  rosplan_knowledge_msgs.KnowledgeItem getMetric();
  void setMetric(rosplan_knowledge_msgs.KnowledgeItem value);
}
