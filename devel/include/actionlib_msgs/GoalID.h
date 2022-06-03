// Generated by gencpp from file actionlib_msgs/GoalID.msg
// DO NOT EDIT!


#ifndef ACTIONLIB_MSGS_MESSAGE_GOALID_H
#define ACTIONLIB_MSGS_MESSAGE_GOALID_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace actionlib_msgs
{
template <class ContainerAllocator>
struct GoalID_
{
  typedef GoalID_<ContainerAllocator> Type;

  GoalID_()
    : stamp()
    , id()  {
    }
  GoalID_(const ContainerAllocator& _alloc)
    : stamp()
    , id(_alloc)  {
  (void)_alloc;
    }



   typedef ros::Time _stamp_type;
  _stamp_type stamp;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _id_type;
  _id_type id;





  typedef boost::shared_ptr< ::actionlib_msgs::GoalID_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::actionlib_msgs::GoalID_<ContainerAllocator> const> ConstPtr;

}; // struct GoalID_

typedef ::actionlib_msgs::GoalID_<std::allocator<void> > GoalID;

typedef boost::shared_ptr< ::actionlib_msgs::GoalID > GoalIDPtr;
typedef boost::shared_ptr< ::actionlib_msgs::GoalID const> GoalIDConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::actionlib_msgs::GoalID_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace actionlib_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsMessage': True, 'IsFixedSize': False, 'HasHeader': False}
// {'actionlib_msgs': ['/home/stepjam/catkin_ws/src/common_msgs/actionlib_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__getattribute__', '__gt__', '__hash__', '__init__', '__init_subclass__', '__le__', '__lt__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsMessage< ::actionlib_msgs::GoalID_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::actionlib_msgs::GoalID_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::actionlib_msgs::GoalID_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::actionlib_msgs::GoalID_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::actionlib_msgs::GoalID_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::actionlib_msgs::GoalID_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::actionlib_msgs::GoalID_<ContainerAllocator> >
{
  static const char* value()
  {
    return "302881f31927c1df708a2dbab0e80ee8";
  }

  static const char* value(const ::actionlib_msgs::GoalID_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x302881f31927c1dfULL;
  static const uint64_t static_value2 = 0x708a2dbab0e80ee8ULL;
};

template<class ContainerAllocator>
struct DataType< ::actionlib_msgs::GoalID_<ContainerAllocator> >
{
  static const char* value()
  {
    return "actionlib_msgs/GoalID";
  }

  static const char* value(const ::actionlib_msgs::GoalID_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::actionlib_msgs::GoalID_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
";
  }

  static const char* value(const ::actionlib_msgs::GoalID_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::actionlib_msgs::GoalID_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.stamp);
      stream.next(m.id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GoalID_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::actionlib_msgs::GoalID_<ContainerAllocator>& v)
  {
    s << indent << "stamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.stamp);
    s << indent << "id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ACTIONLIB_MSGS_MESSAGE_GOALID_H