// Generated by gencpp from file rosplan_dispatch_msgs/ProblemServiceRequest.msg
// DO NOT EDIT!


#ifndef ROSPLAN_DISPATCH_MSGS_MESSAGE_PROBLEMSERVICEREQUEST_H
#define ROSPLAN_DISPATCH_MSGS_MESSAGE_PROBLEMSERVICEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rosplan_dispatch_msgs
{
template <class ContainerAllocator>
struct ProblemServiceRequest_
{
  typedef ProblemServiceRequest_<ContainerAllocator> Type;

  ProblemServiceRequest_()
    : problem_path()
    , problem_string_response(false)  {
    }
  ProblemServiceRequest_(const ContainerAllocator& _alloc)
    : problem_path(_alloc)
    , problem_string_response(false)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _problem_path_type;
  _problem_path_type problem_path;

   typedef uint8_t _problem_string_response_type;
  _problem_string_response_type problem_string_response;





  typedef boost::shared_ptr< ::rosplan_dispatch_msgs::ProblemServiceRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosplan_dispatch_msgs::ProblemServiceRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ProblemServiceRequest_

typedef ::rosplan_dispatch_msgs::ProblemServiceRequest_<std::allocator<void> > ProblemServiceRequest;

typedef boost::shared_ptr< ::rosplan_dispatch_msgs::ProblemServiceRequest > ProblemServiceRequestPtr;
typedef boost::shared_ptr< ::rosplan_dispatch_msgs::ProblemServiceRequest const> ProblemServiceRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosplan_dispatch_msgs::ProblemServiceRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosplan_dispatch_msgs::ProblemServiceRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rosplan_dispatch_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'rosplan_dispatch_msgs': ['/home/ys/MOMDP_DESPOT/ROSPlan/src/rosplan/rosplan_dispatch_msgs/msg', '/home/ys/MOMDP_DESPOT/ROSPlan/devel/share/rosplan_dispatch_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'diagnostic_msgs': ['/opt/ros/kinetic/share/diagnostic_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rosplan_dispatch_msgs::ProblemServiceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosplan_dispatch_msgs::ProblemServiceRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosplan_dispatch_msgs::ProblemServiceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosplan_dispatch_msgs::ProblemServiceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosplan_dispatch_msgs::ProblemServiceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosplan_dispatch_msgs::ProblemServiceRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosplan_dispatch_msgs::ProblemServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "82859894b2713514bb229e9171a8b163";
  }

  static const char* value(const ::rosplan_dispatch_msgs::ProblemServiceRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x82859894b2713514ULL;
  static const uint64_t static_value2 = 0xbb229e9171a8b163ULL;
};

template<class ContainerAllocator>
struct DataType< ::rosplan_dispatch_msgs::ProblemServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosplan_dispatch_msgs/ProblemServiceRequest";
  }

  static const char* value(const ::rosplan_dispatch_msgs::ProblemServiceRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosplan_dispatch_msgs::ProblemServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
string problem_path\n\
bool problem_string_response\n\
";
  }

  static const char* value(const ::rosplan_dispatch_msgs::ProblemServiceRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosplan_dispatch_msgs::ProblemServiceRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.problem_path);
      stream.next(m.problem_string_response);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ProblemServiceRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosplan_dispatch_msgs::ProblemServiceRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosplan_dispatch_msgs::ProblemServiceRequest_<ContainerAllocator>& v)
  {
    s << indent << "problem_path: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.problem_path);
    s << indent << "problem_string_response: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.problem_string_response);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSPLAN_DISPATCH_MSGS_MESSAGE_PROBLEMSERVICEREQUEST_H
