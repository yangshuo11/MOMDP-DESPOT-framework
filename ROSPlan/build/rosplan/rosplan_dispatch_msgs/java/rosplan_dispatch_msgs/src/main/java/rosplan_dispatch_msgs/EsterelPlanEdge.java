package rosplan_dispatch_msgs;

public interface EsterelPlanEdge extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_dispatch_msgs/EsterelPlanEdge";
  static final java.lang.String _DEFINITION = "#EsterelPlanEdge message\nint32 edge_id\nstring edge_name\nint32 signal_type\nint32[] source_ids\nint32[] sink_ids\nfloat64 duration_lower_bound\nfloat64 duration_upper_bound\n";
  int getEdgeId();
  void setEdgeId(int value);
  java.lang.String getEdgeName();
  void setEdgeName(java.lang.String value);
  int getSignalType();
  void setSignalType(int value);
  int[] getSourceIds();
  void setSourceIds(int[] value);
  int[] getSinkIds();
  void setSinkIds(int[] value);
  double getDurationLowerBound();
  void setDurationLowerBound(double value);
  double getDurationUpperBound();
  void setDurationUpperBound(double value);
}
