package occupancy_grid_utils;

public interface OverlayClouds extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "occupancy_grid_utils/OverlayClouds";
  static final java.lang.String _DEFINITION = "nav_msgs/OccupancyGrid grid\nstring frame_id\nfloat32 occupancy_threshold\nfloat32 max_distance\nfloat32 min_pass_through\nint32[] hit_counts\nint32[] pass_through_counts";
  nav_msgs.OccupancyGrid getGrid();
  void setGrid(nav_msgs.OccupancyGrid value);
  java.lang.String getFrameId();
  void setFrameId(java.lang.String value);
  float getOccupancyThreshold();
  void setOccupancyThreshold(float value);
  float getMaxDistance();
  void setMaxDistance(float value);
  float getMinPassThrough();
  void setMinPassThrough(float value);
  int[] getHitCounts();
  void setHitCounts(int[] value);
  int[] getPassThroughCounts();
  void setPassThroughCounts(int[] value);
}
