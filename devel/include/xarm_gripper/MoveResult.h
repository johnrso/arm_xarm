// Generated by gencpp from file xarm_gripper/MoveResult.msg
// DO NOT EDIT!


#ifndef XARM_GRIPPER_MESSAGE_MOVERESULT_H
#define XARM_GRIPPER_MESSAGE_MOVERESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace xarm_gripper
{
template <class ContainerAllocator>
struct MoveResult_
{
  typedef MoveResult_<ContainerAllocator> Type;

  MoveResult_()
    : success(false)
    , err_code(0)  {
    }
  MoveResult_(const ContainerAllocator& _alloc)
    : success(false)
    , err_code(0)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef int16_t _err_code_type;
  _err_code_type err_code;





  typedef boost::shared_ptr< ::xarm_gripper::MoveResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::xarm_gripper::MoveResult_<ContainerAllocator> const> ConstPtr;

}; // struct MoveResult_

typedef ::xarm_gripper::MoveResult_<std::allocator<void> > MoveResult;

typedef boost::shared_ptr< ::xarm_gripper::MoveResult > MoveResultPtr;
typedef boost::shared_ptr< ::xarm_gripper::MoveResult const> MoveResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::xarm_gripper::MoveResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::xarm_gripper::MoveResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace xarm_gripper

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsMessage': True, 'IsFixedSize': True, 'HasHeader': False}
// {'xarm_gripper': ['/home/stepjam/catkin_ws/devel/share/xarm_gripper/msg'], 'actionlib_msgs': ['/home/stepjam/catkin_ws/src/common_msgs/actionlib_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__getattribute__', '__gt__', '__hash__', '__init__', '__init_subclass__', '__le__', '__lt__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsMessage< ::xarm_gripper::MoveResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::xarm_gripper::MoveResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::xarm_gripper::MoveResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::xarm_gripper::MoveResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::xarm_gripper::MoveResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::xarm_gripper::MoveResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::xarm_gripper::MoveResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bd37d58cd262d8243347be50af0c1a3f";
  }

  static const char* value(const ::xarm_gripper::MoveResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbd37d58cd262d824ULL;
  static const uint64_t static_value2 = 0x3347be50af0c1a3fULL;
};

template<class ContainerAllocator>
struct DataType< ::xarm_gripper::MoveResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "xarm_gripper/MoveResult";
  }

  static const char* value(const ::xarm_gripper::MoveResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::xarm_gripper::MoveResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
bool success \n\
\n\
int16 err_code\n\
\n\
";
  }

  static const char* value(const ::xarm_gripper::MoveResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::xarm_gripper::MoveResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.err_code);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoveResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::xarm_gripper::MoveResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::xarm_gripper::MoveResult_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "err_code: ";
    Printer<int16_t>::stream(s, indent + "  ", v.err_code);
  }
};

} // namespace message_operations
} // namespace ros

#endif // XARM_GRIPPER_MESSAGE_MOVERESULT_H
