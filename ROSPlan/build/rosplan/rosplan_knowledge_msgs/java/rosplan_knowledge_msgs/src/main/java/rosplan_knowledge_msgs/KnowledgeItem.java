package rosplan_knowledge_msgs;

public interface KnowledgeItem extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_knowledge_msgs/KnowledgeItem";
  static final java.lang.String _DEFINITION = "# A knowledge item used to represent a piece of the state in ROSPlan\n\nuint8 INSTANCE = 0\nuint8 FACT = 1\nuint8 FUNCTION = 2\nuint8 EXPRESSION = 3\nuint8 INEQUALITY = 4\n\nuint8 knowledge_type\n\n# time at which this knowledge becomes true\ntime initial_time\n\n# knowledge is explicitly false\nbool is_negative\n\n#---------\n# INSTANCE\n#---------\n\n# instance knowledge_type\nstring instance_type\nstring instance_name\n\n#----------------------\n# PREDICATE OR FUNCTION\n#----------------------\n\n# attribute knowledge_type\nstring attribute_name\ndiagnostic_msgs/KeyValue[] values\n\n#---------\n# FUNCTION\n#---------\n\n# function value\nfloat64 function_value\n\n#-----------\n# EXPRESSION\n#-----------\n\nstring optimization\nrosplan_knowledge_msgs/ExprComposite expr\n\n#-----------\n# INEQUALITY\n#-----------\n\nrosplan_knowledge_msgs/DomainInequality ineq\n";
  static final byte INSTANCE = 0;
  static final byte FACT = 1;
  static final byte FUNCTION = 2;
  static final byte EXPRESSION = 3;
  static final byte INEQUALITY = 4;
  byte getKnowledgeType();
  void setKnowledgeType(byte value);
  org.ros.message.Time getInitialTime();
  void setInitialTime(org.ros.message.Time value);
  boolean getIsNegative();
  void setIsNegative(boolean value);
  java.lang.String getInstanceType();
  void setInstanceType(java.lang.String value);
  java.lang.String getInstanceName();
  void setInstanceName(java.lang.String value);
  java.lang.String getAttributeName();
  void setAttributeName(java.lang.String value);
  java.util.List<diagnostic_msgs.KeyValue> getValues();
  void setValues(java.util.List<diagnostic_msgs.KeyValue> value);
  double getFunctionValue();
  void setFunctionValue(double value);
  java.lang.String getOptimization();
  void setOptimization(java.lang.String value);
  rosplan_knowledge_msgs.ExprComposite getExpr();
  void setExpr(rosplan_knowledge_msgs.ExprComposite value);
  rosplan_knowledge_msgs.DomainInequality getIneq();
  void setIneq(rosplan_knowledge_msgs.DomainInequality value);
}
