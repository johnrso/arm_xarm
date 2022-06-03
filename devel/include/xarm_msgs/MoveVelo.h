// Generated by gencpp from file xarm_msgs/MoveVelo.msg
// DO NOT EDIT!


#ifndef XARM_MSGS_MESSAGE_MOVEVELO_H
#define XARM_MSGS_MESSAGE_MOVEVELO_H

#include <ros/service_traits.h>


#include <xarm_msgs/MoveVeloRequest.h>
#include <xarm_msgs/MoveVeloResponse.h>


namespace xarm_msgs
{

struct MoveVelo
{

typedef MoveVeloRequest Request;
typedef MoveVeloResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct MoveVelo
} // namespace xarm_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::xarm_msgs::MoveVelo > {
  static const char* value()
  {
    return "7ab1cadf314da821f631e86ead48e30d";
  }

  static const char* value(const ::xarm_msgs::MoveVelo&) { return value(); }
};

template<>
struct DataType< ::xarm_msgs::MoveVelo > {
  static const char* value()
  {
    return "xarm_msgs/MoveVelo";
  }

  static const char* value(const ::xarm_msgs::MoveVelo&) { return value(); }
};


// service_traits::MD5Sum< ::xarm_msgs::MoveVeloRequest> should match 
// service_traits::MD5Sum< ::xarm_msgs::MoveVelo > 
template<>
struct MD5Sum< ::xarm_msgs::MoveVeloRequest>
{
  static const char* value()
  {
    return MD5Sum< ::xarm_msgs::MoveVelo >::value();
  }
  static const char* value(const ::xarm_msgs::MoveVeloRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::xarm_msgs::MoveVeloRequest> should match 
// service_traits::DataType< ::xarm_msgs::MoveVelo > 
template<>
struct DataType< ::xarm_msgs::MoveVeloRequest>
{
  static const char* value()
  {
    return DataType< ::xarm_msgs::MoveVelo >::value();
  }
  static const char* value(const ::xarm_msgs::MoveVeloRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::xarm_msgs::MoveVeloResponse> should match 
// service_traits::MD5Sum< ::xarm_msgs::MoveVelo > 
template<>
struct MD5Sum< ::xarm_msgs::MoveVeloResponse>
{
  static const char* value()
  {
    return MD5Sum< ::xarm_msgs::MoveVelo >::value();
  }
  static const char* value(const ::xarm_msgs::MoveVeloResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::xarm_msgs::MoveVeloResponse> should match 
// service_traits::DataType< ::xarm_msgs::MoveVelo > 
template<>
struct DataType< ::xarm_msgs::MoveVeloResponse>
{
  static const char* value()
  {
    return DataType< ::xarm_msgs::MoveVelo >::value();
  }
  static const char* value(const ::xarm_msgs::MoveVeloResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // XARM_MSGS_MESSAGE_MOVEVELO_H
