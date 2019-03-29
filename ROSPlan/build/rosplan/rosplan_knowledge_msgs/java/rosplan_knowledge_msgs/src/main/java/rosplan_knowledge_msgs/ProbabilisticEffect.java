package rosplan_knowledge_msgs;

public interface ProbabilisticEffect extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_knowledge_msgs/ProbabilisticEffect";
  static final java.lang.String _DEFINITION = "# Message used to represent a Probabilistic effect \nrosplan_knowledge_msgs/ExprComposite   probability\nrosplan_knowledge_msgs/DomainFormula[] add_effects # Add effects\nrosplan_knowledge_msgs/DomainFormula[] del_effects # Del effects\nrosplan_knowledge_msgs/DomainAssignment[] assign_effects # Assign effects, mainly used for RDDL Discrete distribution";
  rosplan_knowledge_msgs.ExprComposite getProbability();
  void setProbability(rosplan_knowledge_msgs.ExprComposite value);
  java.util.List<rosplan_knowledge_msgs.DomainFormula> getAddEffects();
  void setAddEffects(java.util.List<rosplan_knowledge_msgs.DomainFormula> value);
  java.util.List<rosplan_knowledge_msgs.DomainFormula> getDelEffects();
  void setDelEffects(java.util.List<rosplan_knowledge_msgs.DomainFormula> value);
  java.util.List<rosplan_knowledge_msgs.DomainAssignment> getAssignEffects();
  void setAssignEffects(java.util.List<rosplan_knowledge_msgs.DomainAssignment> value);
}
