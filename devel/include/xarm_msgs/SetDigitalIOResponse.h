// Generated by gencpp from file xarm_msgs/SetDigitalIOResponse.msg
// DO NOT EDIT!


#ifndef XARM_MSGS_MESSAGE_SETDIGITALIORESPONSE_H
#define XARM_MSGS_MESSAGE_SETDIGITALIORESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace xarm_msgs
{
template <class ContainerAllocator>
struct SetDigitalIOResponse_
{
  typedef SetDigitalIOResponse_<ContainerAllocator> Type;

  SetDigitalIOResponse_()
    : ret(0)
    , message()  {
    }
  SetDigitalIOResponse_(const ContainerAllocator& _alloc)
    : ret(0)
    , message(_alloc)  {
  (void)_alloc;
    }



   typedef int16_t _ret_type;
  _ret_type ret;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _message_type;
  _message_type message;





  typedef boost::shared_ptr< ::xarm_msgs::SetDigitalIOResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::xarm_msgs::SetDigitalIOResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetDigitalIOResponse_

typedef ::xarm_msgs::SetDigitalIOResponse_<std::allocator<void> > SetDigitalIOResponse;

typedef boost::shared_ptr< ::xarm_msgs::SetDigitalIOResponse > SetDigitalIOResponsePtr;
typedef boost::shared_ptr< ::xarm_msgs::SetDigitalIOResponse const> SetDigitalIOResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::xarm_msgs::SetDigitalIOResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::xarm_msgs::SetDigitalIOResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace xarm_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsMessage': True, 'IsFixedSize': False, 'HasHeader': False}
// {'xarm_msgs': ['/home/stepjam/catkin_ws/src/xarm_ros/xarm_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__getattribute__', '__gt__', '__hash__', '__init__', '__init_subclass__', '__le__', '__lt__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsMessage< ::xarm_msgs::SetDigitalIOResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::xarm_msgs::SetDigitalIOResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::xarm_msgs::SetDigitalIOResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::xarm_msgs::SetDigitalIOResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::xarm_msgs::SetDigitalIOResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::xarm_msgs::SetDigitalIOResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::xarm_msgs::SetDigitalIOResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "76c68a2c5e109f4d6a4dc1cfc355f405";
  }

  static const char* value(const ::xarm_msgs::SetDigitalIOResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x76c68a2c5e109f4dULL;
  static const uint64_t static_value2 = 0x6a4dc1cfc355f405ULL;
};

template<class ContainerAllocator>
struct DataType< ::xarm_msgs::SetDigitalIOResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "xarm_msgs/SetDigitalIOResponse";
  }

  static const char* value(const ::xarm_msgs::SetDigitalIOResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::xarm_msgs::SetDigitalIOResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
int16 ret\n\
\n\
string message\n\
";
  }

  static const char* value(const ::xarm_msgs::SetDigitalIOResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::xarm_msgs::SetDigitalIOResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.ret);
      stream.next(m.message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetDigitalIOResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::xarm_msgs::SetDigitalIOResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::xarm_msgs::SetDigitalIOResponse_<ContainerAllocator>& v)
  {
    s << indent << "ret: ";
    Printer<int16_t>::stream(s, indent + "  ", v.ret);
    s << indent << "message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // XARM_MSGS_MESSAGE_SETDIGITALIORESPONSE_H
