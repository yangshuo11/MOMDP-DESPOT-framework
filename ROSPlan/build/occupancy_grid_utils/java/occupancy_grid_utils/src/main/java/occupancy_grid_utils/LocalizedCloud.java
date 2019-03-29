package occupancy_grid_utils;

public interface LocalizedCloud extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "occupancy_grid_utils/LocalizedCloud";
  static final java.lang.String _DEFINITION = "# Represents a point cloud (in a sensor frame) together with the pose of the sensor in\n# reference frame header.frame_id\n# The header of the cloud is ignored\nHeader header\ngeometry_msgs/Pose sensor_pose\nsensor_msgs/PointCloud cloud";
  std_msgs.Header getHeader();
  void setHeader(std_msgs.Header value);
  geometry_msgs.Pose getSensorPose();
  void setSensorPose(geometry_msgs.Pose value);
  sensor_msgs.PointCloud getCloud();
  void setCloud(sensor_msgs.PointCloud value);
}
