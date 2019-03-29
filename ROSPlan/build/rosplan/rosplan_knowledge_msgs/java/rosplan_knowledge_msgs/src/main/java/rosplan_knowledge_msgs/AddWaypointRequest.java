package rosplan_knowledge_msgs;

public interface AddWaypointRequest extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_knowledge_msgs/AddWaypointRequest";
  static final java.lang.String _DEFINITION = "string id\ngeometry_msgs/PoseStamped waypoint\nfloat32 connecting_distance\nint8 occupancy_threshold\n";
  java.lang.String getId();
  void setId(java.lang.String value);
  geometry_msgs.PoseStamped getWaypoint();
  void setWaypoint(geometry_msgs.PoseStamped value);
  float getConnectingDistance();
  void setConnectingDistance(float value);
  byte getOccupancyThreshold();
  void setOccupancyThreshold(byte value);
}
