package rosplan_knowledge_msgs;

public interface ExprComposite extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_knowledge_msgs/ExprComposite";
  static final java.lang.String _DEFINITION = "# A message used to represent a numerical expression; composite type (2/2)\n# stores an array of ExprBase as prefix notation\n\n# components\nExprBase[] tokens\n";
  java.util.List<rosplan_knowledge_msgs.ExprBase> getTokens();
  void setTokens(java.util.List<rosplan_knowledge_msgs.ExprBase> value);
}
