package rosplan_knowledge_msgs;

public interface KnowledgeUpdateServiceRequest extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_knowledge_msgs/KnowledgeUpdateServiceRequest";
  static final java.lang.String _DEFINITION = "# Knowledge building; service(1/1):\n# Add or remove knowledge from the current state.\n\nuint8 ADD_KNOWLEDGE = 0\nuint8 ADD_GOAL = 1\nuint8 REMOVE_KNOWLEDGE = 2\nuint8 REMOVE_GOAL = 3\nuint8 ADD_METRIC = 4\nuint8 REMOVE_METRIC = 5\n\nuint8 update_type\nrosplan_knowledge_msgs/KnowledgeItem knowledge\n";
  static final byte ADD_KNOWLEDGE = 0;
  static final byte ADD_GOAL = 1;
  static final byte REMOVE_KNOWLEDGE = 2;
  static final byte REMOVE_GOAL = 3;
  static final byte ADD_METRIC = 4;
  static final byte REMOVE_METRIC = 5;
  byte getUpdateType();
  void setUpdateType(byte value);
  rosplan_knowledge_msgs.KnowledgeItem getKnowledge();
  void setKnowledge(rosplan_knowledge_msgs.KnowledgeItem value);
}
