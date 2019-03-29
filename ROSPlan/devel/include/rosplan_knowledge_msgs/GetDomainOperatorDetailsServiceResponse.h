// Generated by gencpp from file rosplan_knowledge_msgs/GetDomainOperatorDetailsServiceResponse.msg
// DO NOT EDIT!


#ifndef ROSPLAN_KNOWLEDGE_MSGS_MESSAGE_GETDOMAINOPERATORDETAILSSERVICERESPONSE_H
#define ROSPLAN_KNOWLEDGE_MSGS_MESSAGE_GETDOMAINOPERATORDETAILSSERVICERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <rosplan_knowledge_msgs/DomainOperator.h>

namespace rosplan_knowledge_msgs
{
template <class ContainerAllocator>
struct GetDomainOperatorDetailsServiceResponse_
{
  typedef GetDomainOperatorDetailsServiceResponse_<ContainerAllocator> Type;

  GetDomainOperatorDetailsServiceResponse_()
    : op()  {
    }
  GetDomainOperatorDetailsServiceResponse_(const ContainerAllocator& _alloc)
    : op(_alloc)  {
  (void)_alloc;
    }



   typedef  ::rosplan_knowledge_msgs::DomainOperator_<ContainerAllocator>  _op_type;
  _op_type op;





  typedef boost::shared_ptr< ::rosplan_knowledge_msgs::GetDomainOperatorDetailsServiceResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosplan_knowledge_msgs::GetDomainOperatorDetailsServiceResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetDomainOperatorDetailsServiceResponse_

typedef ::rosplan_knowledge_msgs::GetDomainOperatorDetailsServiceResponse_<std::allocator<void> > GetDomainOperatorDetailsServiceResponse;

typedef boost::shared_ptr< ::rosplan_knowledge_msgs::GetDomainOperatorDetailsServiceResponse > GetDomainOperatorDetailsServiceResponsePtr;
typedef boost::shared_ptr< ::rosplan_knowledge_msgs::GetDomainOperatorDetailsServiceResponse const> GetDomainOperatorDetailsServiceResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosplan_knowledge_msgs::GetDomainOperatorDetailsServiceResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosplan_knowledge_msgs::GetDomainOperatorDetailsServiceResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rosplan_knowledge_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'diagnostic_msgs': ['/opt/ros/kinetic/share/diagnostic_msgs/cmake/../msg'], 'rosplan_knowledge_msgs': ['/home/ys/MOMDP_DESPOT/ROSPlan/src/rosplan/rosplan_knowledge_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rosplan_knowledge_msgs::GetDomainOperatorDetailsServiceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosplan_knowledge_msgs::GetDomainOperatorDetailsServiceResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosplan_knowledge_msgs::GetDomainOperatorDetailsServiceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosplan_knowledge_msgs::GetDomainOperatorDetailsServiceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosplan_knowledge_msgs::GetDomainOperatorDetailsServiceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosplan_knowledge_msgs::GetDomainOperatorDetailsServiceResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosplan_knowledge_msgs::GetDomainOperatorDetailsServiceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "edce7cac94e586668cfa3fe4c6ab304a";
  }

  static const char* value(const ::rosplan_knowledge_msgs::GetDomainOperatorDetailsServiceResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xedce7cac94e58666ULL;
  static const uint64_t static_value2 = 0x8cfa3fe4c6ab304aULL;
};

template<class ContainerAllocator>
struct DataType< ::rosplan_knowledge_msgs::GetDomainOperatorDetailsServiceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosplan_knowledge_msgs/GetDomainOperatorDetailsServiceResponse";
  }

  static const char* value(const ::rosplan_knowledge_msgs::GetDomainOperatorDetailsServiceResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosplan_knowledge_msgs::GetDomainOperatorDetailsServiceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosplan_knowledge_msgs/DomainOperator op\n\
\n\
\n\
================================================================================\n\
MSG: rosplan_knowledge_msgs/DomainOperator\n\
# A message used to represent an ungrounded operator in the domain.\n\
\n\
# (1) name and parameters\n\
rosplan_knowledge_msgs/DomainFormula formula\n\
\n\
# (2) duration constraint\n\
\n\
\n\
# (3) effect lists\n\
rosplan_knowledge_msgs/DomainFormula[] at_start_add_effects\n\
rosplan_knowledge_msgs/DomainFormula[] at_start_del_effects\n\
rosplan_knowledge_msgs/DomainFormula[] at_end_add_effects\n\
rosplan_knowledge_msgs/DomainFormula[] at_end_del_effects\n\
rosplan_knowledge_msgs/DomainAssignment[] at_start_assign_effects\n\
rosplan_knowledge_msgs/DomainAssignment[] at_end_assign_effects\n\
rosplan_knowledge_msgs/ProbabilisticEffect[] probabilistic_effects\n\
\n\
# (4) conditions\n\
rosplan_knowledge_msgs/DomainFormula[] at_start_simple_condition\n\
rosplan_knowledge_msgs/DomainFormula[] over_all_simple_condition\n\
rosplan_knowledge_msgs/DomainFormula[] at_end_simple_condition\n\
rosplan_knowledge_msgs/DomainFormula[] at_start_neg_condition\n\
rosplan_knowledge_msgs/DomainFormula[] over_all_neg_condition\n\
rosplan_knowledge_msgs/DomainFormula[] at_end_neg_condition\n\
\n\
================================================================================\n\
MSG: rosplan_knowledge_msgs/DomainFormula\n\
# A message used to represent an atomic formula from the domain.\n\
# typed_parameters matches label -> type\n\
string name\n\
diagnostic_msgs/KeyValue[] typed_parameters\n\
\n\
================================================================================\n\
MSG: diagnostic_msgs/KeyValue\n\
string key # what to label this value when viewing\n\
string value # a value to track over time\n\
\n\
================================================================================\n\
MSG: rosplan_knowledge_msgs/DomainAssignment\n\
# A message used to store the numeric effects of an action\n\
# Can be grounded or ungrounded\n\
\n\
uint8 ASSIGN   = 0\n\
uint8 INCREASE  = 1\n\
uint8 DECREASE = 2\n\
uint8 SCALE_UP = 3\n\
uint8 SCALE_DOWN = 4\n\
uint8 ASSIGN_CTS = 5\n\
\n\
uint8 assign_type\n\
\n\
rosplan_knowledge_msgs/DomainFormula LHS\n\
rosplan_knowledge_msgs/ExprComposite RHS\n\
\n\
bool grounded\n\
\n\
================================================================================\n\
MSG: rosplan_knowledge_msgs/ExprComposite\n\
# A message used to represent a numerical expression; composite type (2/2)\n\
# stores an array of ExprBase as prefix notation\n\
\n\
# components\n\
ExprBase[] tokens\n\
\n\
================================================================================\n\
MSG: rosplan_knowledge_msgs/ExprBase\n\
# A message used to represent a numerical expression; base types (1/2)\n\
\n\
# expression types\n\
uint8 CONSTANT = 0\n\
uint8 FUNCTION = 1\n\
uint8 OPERATOR = 2\n\
uint8 SPECIAL  = 3\n\
\n\
# operators\n\
uint8 ADD    = 0\n\
uint8 SUB    = 1\n\
uint8 MUL    = 2\n\
uint8 DIV    = 3\n\
uint8 UMINUS = 4\n\
\n\
# special types\n\
uint8 HASHT      = 0\n\
uint8 TOTAL_TIME = 1\n\
uint8 DURATION   = 2\n\
\n\
# expression base type\n\
uint8 expr_type\n\
\n\
# constant value\n\
float64 constant\n\
\n\
# function\n\
rosplan_knowledge_msgs/DomainFormula function\n\
\n\
# operator\n\
uint8 op\n\
\n\
# special\n\
uint8 special_type\n\
\n\
================================================================================\n\
MSG: rosplan_knowledge_msgs/ProbabilisticEffect\n\
# Message used to represent a Probabilistic effect \n\
rosplan_knowledge_msgs/ExprComposite   probability\n\
rosplan_knowledge_msgs/DomainFormula[] add_effects # Add effects\n\
rosplan_knowledge_msgs/DomainFormula[] del_effects # Del effects\n\
rosplan_knowledge_msgs/DomainAssignment[] assign_effects # Assign effects, mainly used for RDDL Discrete distribution\n\
";
  }

  static const char* value(const ::rosplan_knowledge_msgs::GetDomainOperatorDetailsServiceResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosplan_knowledge_msgs::GetDomainOperatorDetailsServiceResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.op);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetDomainOperatorDetailsServiceResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosplan_knowledge_msgs::GetDomainOperatorDetailsServiceResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosplan_knowledge_msgs::GetDomainOperatorDetailsServiceResponse_<ContainerAllocator>& v)
  {
    s << indent << "op: ";
    s << std::endl;
    Printer< ::rosplan_knowledge_msgs::DomainOperator_<ContainerAllocator> >::stream(s, indent + "  ", v.op);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSPLAN_KNOWLEDGE_MSGS_MESSAGE_GETDOMAINOPERATORDETAILSSERVICERESPONSE_H
