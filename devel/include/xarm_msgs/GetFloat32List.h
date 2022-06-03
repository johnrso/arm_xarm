// Generated by gencpp from file xarm_msgs/GetFloat32List.msg
// DO NOT EDIT!


#ifndef XARM_MSGS_MESSAGE_GETFLOAT32LIST_H
#define XARM_MSGS_MESSAGE_GETFLOAT32LIST_H

#include <ros/service_traits.h>


#include <xarm_msgs/GetFloat32ListRequest.h>
#include <xarm_msgs/GetFloat32ListResponse.h>


namespace xarm_msgs
{

struct GetFloat32List
{

typedef GetFloat32ListRequest Request;
typedef GetFloat32ListResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetFloat32List
} // namespace xarm_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::xarm_msgs::GetFloat32List > {
  static const char* value()
  {
    return "9470c18b0944f559a19d029d524ee6b1";
  }

  static const char* value(const ::xarm_msgs::GetFloat32List&) { return value(); }
};

template<>
struct DataType< ::xarm_msgs::GetFloat32List > {
  static const char* value()
  {
    return "xarm_msgs/GetFloat32List";
  }

  static const char* value(const ::xarm_msgs::GetFloat32List&) { return value(); }
};


// service_traits::MD5Sum< ::xarm_msgs::GetFloat32ListRequest> should match 
// service_traits::MD5Sum< ::xarm_msgs::GetFloat32List > 
template<>
struct MD5Sum< ::xarm_msgs::GetFloat32ListRequest>
{
  static const char* value()
  {
    return MD5Sum< ::xarm_msgs::GetFloat32List >::value();
  }
  static const char* value(const ::xarm_msgs::GetFloat32ListRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::xarm_msgs::GetFloat32ListRequest> should match 
// service_traits::DataType< ::xarm_msgs::GetFloat32List > 
template<>
struct DataType< ::xarm_msgs::GetFloat32ListRequest>
{
  static const char* value()
  {
    return DataType< ::xarm_msgs::GetFloat32List >::value();
  }
  static const char* value(const ::xarm_msgs::GetFloat32ListRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::xarm_msgs::GetFloat32ListResponse> should match 
// service_traits::MD5Sum< ::xarm_msgs::GetFloat32List > 
template<>
struct MD5Sum< ::xarm_msgs::GetFloat32ListResponse>
{
  static const char* value()
  {
    return MD5Sum< ::xarm_msgs::GetFloat32List >::value();
  }
  static const char* value(const ::xarm_msgs::GetFloat32ListResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::xarm_msgs::GetFloat32ListResponse> should match 
// service_traits::DataType< ::xarm_msgs::GetFloat32List > 
template<>
struct DataType< ::xarm_msgs::GetFloat32ListResponse>
{
  static const char* value()
  {
    return DataType< ::xarm_msgs::GetFloat32List >::value();
  }
  static const char* value(const ::xarm_msgs::GetFloat32ListResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // XARM_MSGS_MESSAGE_GETFLOAT32LIST_H
