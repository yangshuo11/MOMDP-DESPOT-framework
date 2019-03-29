package occupancy_grid_utils;

public interface NavigationFunction extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "occupancy_grid_utils/NavigationFunction";
  static final java.lang.String _DEFINITION = "nav_msgs/MapMetaData info\nuint32 source\nbool[] valid\nuint32[] back_pointers\nfloat32[] potential";
  nav_msgs.MapMetaData getInfo();
  void setInfo(nav_msgs.MapMetaData value);
  int getSource();
  void setSource(int value);
  boolean[] getValid();
  void setValid(boolean[] value);
  int[] getBackPointers();
  void setBackPointers(int[] value);
  float[] getPotential();
  void setPotential(float[] value);
}
