package rosplan_knowledge_msgs;

public interface GetDomainTypeServiceResponse extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_knowledge_msgs/GetDomainTypeServiceResponse";
  static final java.lang.String _DEFINITION = "string[] types\nstring[] super_types";
  java.util.List<java.lang.String> getTypes();
  void setTypes(java.util.List<java.lang.String> value);
  java.util.List<java.lang.String> getSuperTypes();
  void setSuperTypes(java.util.List<java.lang.String> value);
}
