package rosplan_knowledge_msgs;

public interface DomainAssignment extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_knowledge_msgs/DomainAssignment";
  static final java.lang.String _DEFINITION = "# A message used to store the numeric effects of an action\n# Can be grounded or ungrounded\n\nuint8 ASSIGN   = 0\nuint8 INCREASE  = 1\nuint8 DECREASE = 2\nuint8 SCALE_UP = 3\nuint8 SCALE_DOWN = 4\nuint8 ASSIGN_CTS = 5\n\nuint8 assign_type\n\nrosplan_knowledge_msgs/DomainFormula LHS\nrosplan_knowledge_msgs/ExprComposite RHS\n\nbool grounded\n";
  static final byte ASSIGN = 0;
  static final byte INCREASE = 1;
  static final byte DECREASE = 2;
  static final byte SCALE_UP = 3;
  static final byte SCALE_DOWN = 4;
  static final byte ASSIGN_CTS = 5;
  byte getAssignType();
  void setAssignType(byte value);
  rosplan_knowledge_msgs.DomainFormula getLHS();
  void setLHS(rosplan_knowledge_msgs.DomainFormula value);
  rosplan_knowledge_msgs.ExprComposite getRHS();
  void setRHS(rosplan_knowledge_msgs.ExprComposite value);
  boolean getGrounded();
  void setGrounded(boolean value);
}
