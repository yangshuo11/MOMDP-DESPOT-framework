package rosplan_knowledge_msgs;

public interface DomainOperator extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "rosplan_knowledge_msgs/DomainOperator";
  static final java.lang.String _DEFINITION = "# A message used to represent an ungrounded operator in the domain.\n\n# (1) name and parameters\nrosplan_knowledge_msgs/DomainFormula formula\n\n# (2) duration constraint\n\n\n# (3) effect lists\nrosplan_knowledge_msgs/DomainFormula[] at_start_add_effects\nrosplan_knowledge_msgs/DomainFormula[] at_start_del_effects\nrosplan_knowledge_msgs/DomainFormula[] at_end_add_effects\nrosplan_knowledge_msgs/DomainFormula[] at_end_del_effects\nrosplan_knowledge_msgs/DomainAssignment[] at_start_assign_effects\nrosplan_knowledge_msgs/DomainAssignment[] at_end_assign_effects\nrosplan_knowledge_msgs/ProbabilisticEffect[] probabilistic_effects\n\n# (4) conditions\nrosplan_knowledge_msgs/DomainFormula[] at_start_simple_condition\nrosplan_knowledge_msgs/DomainFormula[] over_all_simple_condition\nrosplan_knowledge_msgs/DomainFormula[] at_end_simple_condition\nrosplan_knowledge_msgs/DomainFormula[] at_start_neg_condition\nrosplan_knowledge_msgs/DomainFormula[] over_all_neg_condition\nrosplan_knowledge_msgs/DomainFormula[] at_end_neg_condition\n";
  rosplan_knowledge_msgs.DomainFormula getFormula();
  void setFormula(rosplan_knowledge_msgs.DomainFormula value);
  java.util.List<rosplan_knowledge_msgs.DomainFormula> getAtStartAddEffects();
  void setAtStartAddEffects(java.util.List<rosplan_knowledge_msgs.DomainFormula> value);
  java.util.List<rosplan_knowledge_msgs.DomainFormula> getAtStartDelEffects();
  void setAtStartDelEffects(java.util.List<rosplan_knowledge_msgs.DomainFormula> value);
  java.util.List<rosplan_knowledge_msgs.DomainFormula> getAtEndAddEffects();
  void setAtEndAddEffects(java.util.List<rosplan_knowledge_msgs.DomainFormula> value);
  java.util.List<rosplan_knowledge_msgs.DomainFormula> getAtEndDelEffects();
  void setAtEndDelEffects(java.util.List<rosplan_knowledge_msgs.DomainFormula> value);
  java.util.List<rosplan_knowledge_msgs.DomainAssignment> getAtStartAssignEffects();
  void setAtStartAssignEffects(java.util.List<rosplan_knowledge_msgs.DomainAssignment> value);
  java.util.List<rosplan_knowledge_msgs.DomainAssignment> getAtEndAssignEffects();
  void setAtEndAssignEffects(java.util.List<rosplan_knowledge_msgs.DomainAssignment> value);
  java.util.List<rosplan_knowledge_msgs.ProbabilisticEffect> getProbabilisticEffects();
  void setProbabilisticEffects(java.util.List<rosplan_knowledge_msgs.ProbabilisticEffect> value);
  java.util.List<rosplan_knowledge_msgs.DomainFormula> getAtStartSimpleCondition();
  void setAtStartSimpleCondition(java.util.List<rosplan_knowledge_msgs.DomainFormula> value);
  java.util.List<rosplan_knowledge_msgs.DomainFormula> getOverAllSimpleCondition();
  void setOverAllSimpleCondition(java.util.List<rosplan_knowledge_msgs.DomainFormula> value);
  java.util.List<rosplan_knowledge_msgs.DomainFormula> getAtEndSimpleCondition();
  void setAtEndSimpleCondition(java.util.List<rosplan_knowledge_msgs.DomainFormula> value);
  java.util.List<rosplan_knowledge_msgs.DomainFormula> getAtStartNegCondition();
  void setAtStartNegCondition(java.util.List<rosplan_knowledge_msgs.DomainFormula> value);
  java.util.List<rosplan_knowledge_msgs.DomainFormula> getOverAllNegCondition();
  void setOverAllNegCondition(java.util.List<rosplan_knowledge_msgs.DomainFormula> value);
  java.util.List<rosplan_knowledge_msgs.DomainFormula> getAtEndNegCondition();
  void setAtEndNegCondition(java.util.List<rosplan_knowledge_msgs.DomainFormula> value);
}
