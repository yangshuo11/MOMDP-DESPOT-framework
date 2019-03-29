package rosplan_knowledge_msgs;

public interface DomainInequality extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_knowledge_msgs/DomainInequality";
  static final java.lang.String _DEFINITION = "# A message used to store the numeric effects of an action\n# Can be grounded or ungrounded\n\nuint8 GREATER   = 0\nuint8 GREATEREQ = 1\nuint8 LESS      = 2\nuint8 LESSEQ    = 3\nuint8 EQUALS    = 4\n\nuint8 comparison_type\n\nrosplan_knowledge_msgs/ExprComposite LHS\nrosplan_knowledge_msgs/ExprComposite RHS\n\nbool grounded\n";
  static final byte GREATER = 0;
  static final byte GREATEREQ = 1;
  static final byte LESS = 2;
  static final byte LESSEQ = 3;
  static final byte EQUALS = 4;
  byte getComparisonType();
  void setComparisonType(byte value);
  rosplan_knowledge_msgs.ExprComposite getLHS();
  void setLHS(rosplan_knowledge_msgs.ExprComposite value);
  rosplan_knowledge_msgs.ExprComposite getRHS();
  void setRHS(rosplan_knowledge_msgs.ExprComposite value);
  boolean getGrounded();
  void setGrounded(boolean value);
}
