package rosplan_knowledge_msgs;

public interface ExprBase extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_knowledge_msgs/ExprBase";
  static final java.lang.String _DEFINITION = "# A message used to represent a numerical expression; base types (1/2)\n\n# expression types\nuint8 CONSTANT = 0\nuint8 FUNCTION = 1\nuint8 OPERATOR = 2\nuint8 SPECIAL  = 3\n\n# operators\nuint8 ADD    = 0\nuint8 SUB    = 1\nuint8 MUL    = 2\nuint8 DIV    = 3\nuint8 UMINUS = 4\n\n# special types\nuint8 HASHT      = 0\nuint8 TOTAL_TIME = 1\nuint8 DURATION   = 2\n\n# expression base type\nuint8 expr_type\n\n# constant value\nfloat64 constant\n\n# function\nrosplan_knowledge_msgs/DomainFormula function\n\n# operator\nuint8 op\n\n# special\nuint8 special_type\n";
  static final byte CONSTANT = 0;
  static final byte FUNCTION = 1;
  static final byte OPERATOR = 2;
  static final byte SPECIAL = 3;
  static final byte ADD = 0;
  static final byte SUB = 1;
  static final byte MUL = 2;
  static final byte DIV = 3;
  static final byte UMINUS = 4;
  static final byte HASHT = 0;
  static final byte TOTAL_TIME = 1;
  static final byte DURATION = 2;
  byte getExprType();
  void setExprType(byte value);
  double getConstant();
  void setConstant(double value);
  rosplan_knowledge_msgs.DomainFormula getFunction();
  void setFunction(rosplan_knowledge_msgs.DomainFormula value);
  byte getOp();
  void setOp(byte value);
  byte getSpecialType();
  void setSpecialType(byte value);
}
