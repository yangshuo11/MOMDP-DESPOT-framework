// Generated by gencpp from file rosplan_dispatch_msgs/NonBlockingDispatchFeedback.msg
// DO NOT EDIT!


#ifndef ROSPLAN_DISPATCH_MSGS_MESSAGE_NONBLOCKINGDISPATCHFEEDBACK_H
#define ROSPLAN_DISPATCH_MSGS_MESSAGE_NONBLOCKINGDISPATCHFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <rosplan_dispatch_msgs/ActionFeedback.h>

namespace rosplan_dispatch_msgs
{
template <class ContainerAllocator>
struct NonBlockingDispatchFeedback_
{
  typedef NonBlockingDispatchFeedback_<ContainerAllocator> Type;

  NonBlockingDispatchFeedback_()
    : feedback()  {
    }
  NonBlockingDispatchFeedback_(const ContainerAllocator& _alloc)
    : feedback(_alloc)  {
  (void)_alloc;
    }



   typedef  ::rosplan_dispatch_msgs::ActionFeedback_<ContainerAllocator>  _feedback_type;
  _feedback_type feedback;





  typedef boost::shared_ptr< ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct NonBlockingDispatchFeedback_

typedef ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<std::allocator<void> > NonBlockingDispatchFeedback;

typedef boost::shared_ptr< ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback > NonBlockingDispatchFeedbackPtr;
typedef boost::shared_ptr< ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback const> NonBlockingDispatchFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c100388b79a4f0ef9c6019135b83a757";
  }

  static const char* value(const ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc100388b79a4f0efULL;
  static const uint64_t static_value2 = 0x9c6019135b83a757ULL;
};

template<class ContainerAllocator>
struct DataType< ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosplan_dispatch_msgs/NonBlockingDispatchFeedback";
  }

  static const char* value(const ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
rosplan_dispatch_msgs/ActionFeedback feedback\n\
\n\
\n\
================================================================================\n\
MSG: rosplan_dispatch_msgs/ActionFeedback\n\
#actionFeedback message\n\
int32 action_id\n\
string status\n\
diagnostic_msgs/KeyValue[] information\n\
\n\
================================================================================\n\
MSG: diagnostic_msgs/KeyValue\n\
string key # what to label this value when viewing\n\
string value # a value to track over time\n\
";
  }

  static const char* value(const ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct NonBlockingDispatchFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<ContainerAllocator>& v)
  {
    s << indent << "feedback: ";
    s << std::endl;
    Printer< ::rosplan_dispatch_msgs::ActionFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.feedback);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSPLAN_DISPATCH_MSGS_MESSAGE_NONBLOCKINGDISPATCHFEEDBACK_H
