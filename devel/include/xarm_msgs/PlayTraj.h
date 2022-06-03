// Generated by gencpp from file xarm_msgs/PlayTraj.msg
// DO NOT EDIT!


#ifndef XARM_MSGS_MESSAGE_PLAYTRAJ_H
#define XARM_MSGS_MESSAGE_PLAYTRAJ_H

#include <ros/service_traits.h>


#include <xarm_msgs/PlayTrajRequest.h>
#include <xarm_msgs/PlayTrajResponse.h>


namespace xarm_msgs
{

struct PlayTraj
{

typedef PlayTrajRequest Request;
typedef PlayTrajResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct PlayTraj
} // namespace xarm_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::xarm_msgs::PlayTraj > {
  static const char* value()
  {
    return "80c963774ceddb6d2f6133dfc972a9dd";
  }

  static const char* value(const ::xarm_msgs::PlayTraj&) { return value(); }
};

template<>
struct DataType< ::xarm_msgs::PlayTraj > {
  static const char* value()
  {
    return "xarm_msgs/PlayTraj";
  }

  static const char* value(const ::xarm_msgs::PlayTraj&) { return value(); }
};


// service_traits::MD5Sum< ::xarm_msgs::PlayTrajRequest> should match 
// service_traits::MD5Sum< ::xarm_msgs::PlayTraj > 
template<>
struct MD5Sum< ::xarm_msgs::PlayTrajRequest>
{
  static const char* value()
  {
    return MD5Sum< ::xarm_msgs::PlayTraj >::value();
  }
  static const char* value(const ::xarm_msgs::PlayTrajRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::xarm_msgs::PlayTrajRequest> should match 
// service_traits::DataType< ::xarm_msgs::PlayTraj > 
template<>
struct DataType< ::xarm_msgs::PlayTrajRequest>
{
  static const char* value()
  {
    return DataType< ::xarm_msgs::PlayTraj >::value();
  }
  static const char* value(const ::xarm_msgs::PlayTrajRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::xarm_msgs::PlayTrajResponse> should match 
// service_traits::MD5Sum< ::xarm_msgs::PlayTraj > 
template<>
struct MD5Sum< ::xarm_msgs::PlayTrajResponse>
{
  static const char* value()
  {
    return MD5Sum< ::xarm_msgs::PlayTraj >::value();
  }
  static const char* value(const ::xarm_msgs::PlayTrajResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::xarm_msgs::PlayTrajResponse> should match 
// service_traits::DataType< ::xarm_msgs::PlayTraj > 
template<>
struct DataType< ::xarm_msgs::PlayTrajResponse>
{
  static const char* value()
  {
    return DataType< ::xarm_msgs::PlayTraj >::value();
  }
  static const char* value(const ::xarm_msgs::PlayTrajResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // XARM_MSGS_MESSAGE_PLAYTRAJ_H
