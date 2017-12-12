// Generated by gencpp from file gazebo_msgs/SetPhysicsPropertiesRequest.msg
// DO NOT EDIT!


#ifndef GAZEBO_MSGS_MESSAGE_SETPHYSICSPROPERTIESREQUEST_H
#define GAZEBO_MSGS_MESSAGE_SETPHYSICSPROPERTIESREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Vector3.h>
#include <gazebo_msgs/ODEPhysics.h>

namespace gazebo_msgs
{
template <class ContainerAllocator>
struct SetPhysicsPropertiesRequest_
{
  typedef SetPhysicsPropertiesRequest_<ContainerAllocator> Type;

  SetPhysicsPropertiesRequest_()
    : time_step(0.0)
    , max_update_rate(0.0)
    , gravity()
    , ode_config()  {
    }
  SetPhysicsPropertiesRequest_(const ContainerAllocator& _alloc)
    : time_step(0.0)
    , max_update_rate(0.0)
    , gravity(_alloc)
    , ode_config(_alloc)  {
  (void)_alloc;
    }



   typedef double _time_step_type;
  _time_step_type time_step;

   typedef double _max_update_rate_type;
  _max_update_rate_type max_update_rate;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _gravity_type;
  _gravity_type gravity;

   typedef  ::gazebo_msgs::ODEPhysics_<ContainerAllocator>  _ode_config_type;
  _ode_config_type ode_config;




  typedef boost::shared_ptr< ::gazebo_msgs::SetPhysicsPropertiesRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gazebo_msgs::SetPhysicsPropertiesRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetPhysicsPropertiesRequest_

typedef ::gazebo_msgs::SetPhysicsPropertiesRequest_<std::allocator<void> > SetPhysicsPropertiesRequest;

typedef boost::shared_ptr< ::gazebo_msgs::SetPhysicsPropertiesRequest > SetPhysicsPropertiesRequestPtr;
typedef boost::shared_ptr< ::gazebo_msgs::SetPhysicsPropertiesRequest const> SetPhysicsPropertiesRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gazebo_msgs::SetPhysicsPropertiesRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gazebo_msgs::SetPhysicsPropertiesRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace gazebo_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/kinetic/share/trajectory_msgs/cmake/../msg'], 'gazebo_msgs': ['/home/orsteam/carolyn/catkin_ws/src/gazebo_ros_pkgs/gazebo_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_msgs::SetPhysicsPropertiesRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_msgs::SetPhysicsPropertiesRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gazebo_msgs::SetPhysicsPropertiesRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gazebo_msgs::SetPhysicsPropertiesRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_msgs::SetPhysicsPropertiesRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_msgs::SetPhysicsPropertiesRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gazebo_msgs::SetPhysicsPropertiesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "abd9f82732b52b92e9d6bb36e6a82452";
  }

  static const char* value(const ::gazebo_msgs::SetPhysicsPropertiesRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xabd9f82732b52b92ULL;
  static const uint64_t static_value2 = 0xe9d6bb36e6a82452ULL;
};

template<class ContainerAllocator>
struct DataType< ::gazebo_msgs::SetPhysicsPropertiesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gazebo_msgs/SetPhysicsPropertiesRequest";
  }

  static const char* value(const ::gazebo_msgs::SetPhysicsPropertiesRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gazebo_msgs::SetPhysicsPropertiesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
float64 time_step\n\
float64 max_update_rate\n\
geometry_msgs/Vector3 gravity\n\
gazebo_msgs/ODEPhysics ode_config\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
================================================================================\n\
MSG: gazebo_msgs/ODEPhysics\n\
bool auto_disable_bodies           # enable auto disabling of bodies, default false\n\
uint32 sor_pgs_precon_iters        # preconditioning inner iterations when uisng projected Gauss Seidel\n\
uint32 sor_pgs_iters               # inner iterations when uisng projected Gauss Seidel\n\
float64 sor_pgs_w                  # relaxation parameter when using projected Gauss Seidel, 1 = no relaxation\n\
float64 sor_pgs_rms_error_tol      # rms error tolerance before stopping inner iterations\n\
float64 contact_surface_layer      # contact \"dead-band\" width\n\
float64 contact_max_correcting_vel # contact maximum correction velocity\n\
float64 cfm                        # global constraint force mixing\n\
float64 erp                        # global error reduction parameter\n\
uint32 max_contacts                # maximum contact joints between two geoms\n\
";
  }

  static const char* value(const ::gazebo_msgs::SetPhysicsPropertiesRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gazebo_msgs::SetPhysicsPropertiesRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.time_step);
      stream.next(m.max_update_rate);
      stream.next(m.gravity);
      stream.next(m.ode_config);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetPhysicsPropertiesRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gazebo_msgs::SetPhysicsPropertiesRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gazebo_msgs::SetPhysicsPropertiesRequest_<ContainerAllocator>& v)
  {
    s << indent << "time_step: ";
    Printer<double>::stream(s, indent + "  ", v.time_step);
    s << indent << "max_update_rate: ";
    Printer<double>::stream(s, indent + "  ", v.max_update_rate);
    s << indent << "gravity: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.gravity);
    s << indent << "ode_config: ";
    s << std::endl;
    Printer< ::gazebo_msgs::ODEPhysics_<ContainerAllocator> >::stream(s, indent + "  ", v.ode_config);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GAZEBO_MSGS_MESSAGE_SETPHYSICSPROPERTIESREQUEST_H
