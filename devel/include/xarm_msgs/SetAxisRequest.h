// Generated by gencpp from file xarm_msgs/SetAxisRequest.msg
// DO NOT EDIT!


#ifndef XARM_MSGS_MESSAGE_SETAXISREQUEST_H
#define XARM_MSGS_MESSAGE_SETAXISREQUEST_H


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
struct SetAxisRequest_
{
  typedef SetAxisRequest_<ContainerAllocator> Type;

  SetAxisRequest_()
    : id(0)
    , data(0)  {
    }
  SetAxisRequest_(const ContainerAllocator& _alloc)
    : id(0)
    , data(0)  {
  (void)_alloc;
    }



   typedef int16_t _id_type;
  _id_type id;

   typedef int16_t _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::xarm_msgs::SetAxisRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::xarm_msgs::SetAxisRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetAxisRequest_

typedef ::xarm_msgs::SetAxisRequest_<std::allocator<void> > SetAxisRequest;

typedef boost::shared_ptr< ::xarm_msgs::SetAxisRequest > SetAxisRequestPtr;
typedef boost::shared_ptr< ::xarm_msgs::SetAxisRequest const> SetAxisRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::xarm_msgs::SetAxisRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::xarm_msgs::SetAxisRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace xarm_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsMessage': True, 'IsFixedSize': True, 'HasHeader': False}
// {'xarm_msgs': ['/home/stepjam/catkin_ws/src/xarm_ros/xarm_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__getattribute__', '__gt__', '__hash__', '__init__', '__init_subclass__', '__le__', '__lt__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsMessage< ::xarm_msgs::SetAxisRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::xarm_msgs::SetAxisRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::xarm_msgs::SetAxisRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::xarm_msgs::SetAxisRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::xarm_msgs::SetAxisRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::xarm_msgs::SetAxisRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::xarm_msgs::SetAxisRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8e3ee600c6466350afbb8370fe28c9ca";
  }

  static const char* value(const ::xarm_msgs::SetAxisRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8e3ee600c6466350ULL;
  static const uint64_t static_value2 = 0xafbb8370fe28c9caULL;
};

template<class ContainerAllocator>
struct DataType< ::xarm_msgs::SetAxisRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "xarm_msgs/SetAxisRequest";
  }

  static const char* value(const ::xarm_msgs::SetAxisRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::xarm_msgs::SetAxisRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
\n\
int16 id\n\
int16 data\n\
\n\
";
  }

  static const char* value(const ::xarm_msgs::SetAxisRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::xarm_msgs::SetAxisRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetAxisRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::xarm_msgs::SetAxisRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::xarm_msgs::SetAxisRequest_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<int16_t>::stream(s, indent + "  ", v.id);
    s << indent << "data: ";
    Printer<int16_t>::stream(s, indent + "  ", v.data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // XARM_MSGS_MESSAGE_SETAXISREQUEST_H
