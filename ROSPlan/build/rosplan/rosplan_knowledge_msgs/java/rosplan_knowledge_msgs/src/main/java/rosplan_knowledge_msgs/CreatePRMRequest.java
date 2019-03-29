package rosplan_knowledge_msgs;

public interface CreatePRMRequest extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_knowledge_msgs/CreatePRMRequest";
  static final java.lang.String _DEFINITION = "int32 nr_waypoints\nfloat32 min_distance\nfloat32 casting_distance\nfloat32 connecting_distance\nint8 occupancy_threshold\nint32 total_attempts\n";
  int getNrWaypoints();
  void setNrWaypoints(int value);
  float getMinDistance();
  void setMinDistance(float value);
  float getCastingDistance();
  void setCastingDistance(float value);
  float getConnectingDistance();
  void setConnectingDistance(float value);
  byte getOccupancyThreshold();
  void setOccupancyThreshold(byte value);
  int getTotalAttempts();
  void setTotalAttempts(int value);
}
