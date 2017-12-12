// Generated by gencpp from file randomwalker/GetScore.msg
// DO NOT EDIT!


#ifndef RANDOMWALKER_MESSAGE_GETSCORE_H
#define RANDOMWALKER_MESSAGE_GETSCORE_H

#include <ros/service_traits.h>


#include <randomwalker/GetScoreRequest.h>
#include <randomwalker/GetScoreResponse.h>


namespace randomwalker
{

struct GetScore
{

typedef GetScoreRequest Request;
typedef GetScoreResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetScore
} // namespace randomwalker


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::randomwalker::GetScore > {
  static const char* value()
  {
    return "d4c39963a439a62ef1b91086c84fd1a8";
  }

  static const char* value(const ::randomwalker::GetScore&) { return value(); }
};

template<>
struct DataType< ::randomwalker::GetScore > {
  static const char* value()
  {
    return "randomwalker/GetScore";
  }

  static const char* value(const ::randomwalker::GetScore&) { return value(); }
};


// service_traits::MD5Sum< ::randomwalker::GetScoreRequest> should match 
// service_traits::MD5Sum< ::randomwalker::GetScore > 
template<>
struct MD5Sum< ::randomwalker::GetScoreRequest>
{
  static const char* value()
  {
    return MD5Sum< ::randomwalker::GetScore >::value();
  }
  static const char* value(const ::randomwalker::GetScoreRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::randomwalker::GetScoreRequest> should match 
// service_traits::DataType< ::randomwalker::GetScore > 
template<>
struct DataType< ::randomwalker::GetScoreRequest>
{
  static const char* value()
  {
    return DataType< ::randomwalker::GetScore >::value();
  }
  static const char* value(const ::randomwalker::GetScoreRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::randomwalker::GetScoreResponse> should match 
// service_traits::MD5Sum< ::randomwalker::GetScore > 
template<>
struct MD5Sum< ::randomwalker::GetScoreResponse>
{
  static const char* value()
  {
    return MD5Sum< ::randomwalker::GetScore >::value();
  }
  static const char* value(const ::randomwalker::GetScoreResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::randomwalker::GetScoreResponse> should match 
// service_traits::DataType< ::randomwalker::GetScore > 
template<>
struct DataType< ::randomwalker::GetScoreResponse>
{
  static const char* value()
  {
    return DataType< ::randomwalker::GetScore >::value();
  }
  static const char* value(const ::randomwalker::GetScoreResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // RANDOMWALKER_MESSAGE_GETSCORE_H
