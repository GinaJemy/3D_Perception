// Generated by gencpp from file pr2_robot/PickPlaceRequest.msg
// DO NOT EDIT!


#ifndef PR2_ROBOT_MESSAGE_PICKPLACEREQUEST_H
#define PR2_ROBOT_MESSAGE_PICKPLACEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Int32.h>
#include <std_msgs/String.h>
#include <std_msgs/String.h>
#include <geometry_msgs/Pose.h>
#include <geometry_msgs/Pose.h>

namespace pr2_robot
{
template <class ContainerAllocator>
struct PickPlaceRequest_
{
  typedef PickPlaceRequest_<ContainerAllocator> Type;

  PickPlaceRequest_()
    : test_scene_num()
    , object_name()
    , arm_name()
    , pick_pose()
    , place_pose()  {
    }
  PickPlaceRequest_(const ContainerAllocator& _alloc)
    : test_scene_num(_alloc)
    , object_name(_alloc)
    , arm_name(_alloc)
    , pick_pose(_alloc)
    , place_pose(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Int32_<ContainerAllocator>  _test_scene_num_type;
  _test_scene_num_type test_scene_num;

   typedef  ::std_msgs::String_<ContainerAllocator>  _object_name_type;
  _object_name_type object_name;

   typedef  ::std_msgs::String_<ContainerAllocator>  _arm_name_type;
  _arm_name_type arm_name;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pick_pose_type;
  _pick_pose_type pick_pose;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _place_pose_type;
  _place_pose_type place_pose;





  typedef boost::shared_ptr< ::pr2_robot::PickPlaceRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pr2_robot::PickPlaceRequest_<ContainerAllocator> const> ConstPtr;

}; // struct PickPlaceRequest_

typedef ::pr2_robot::PickPlaceRequest_<std::allocator<void> > PickPlaceRequest;

typedef boost::shared_ptr< ::pr2_robot::PickPlaceRequest > PickPlaceRequestPtr;
typedef boost::shared_ptr< ::pr2_robot::PickPlaceRequest const> PickPlaceRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pr2_robot::PickPlaceRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pr2_robot::PickPlaceRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pr2_robot

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'pr2_robot': ['/home/gina/robot_ws/src/RoboND-Perception-Project/pr2_robot/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pr2_robot::PickPlaceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pr2_robot::PickPlaceRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pr2_robot::PickPlaceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pr2_robot::PickPlaceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_robot::PickPlaceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_robot::PickPlaceRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pr2_robot::PickPlaceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a1c37746ef6af94d99dcfe2dd193260b";
  }

  static const char* value(const ::pr2_robot::PickPlaceRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa1c37746ef6af94dULL;
  static const uint64_t static_value2 = 0x99dcfe2dd193260bULL;
};

template<class ContainerAllocator>
struct DataType< ::pr2_robot::PickPlaceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pr2_robot/PickPlaceRequest";
  }

  static const char* value(const ::pr2_robot::PickPlaceRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pr2_robot::PickPlaceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
std_msgs/Int32 test_scene_num\n\
std_msgs/String object_name\n\
std_msgs/String arm_name\n\
geometry_msgs/Pose pick_pose\n\
geometry_msgs/Pose place_pose\n\
\n\
================================================================================\n\
MSG: std_msgs/Int32\n\
int32 data\n\
================================================================================\n\
MSG: std_msgs/String\n\
string data\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::pr2_robot::PickPlaceRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pr2_robot::PickPlaceRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.test_scene_num);
      stream.next(m.object_name);
      stream.next(m.arm_name);
      stream.next(m.pick_pose);
      stream.next(m.place_pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PickPlaceRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pr2_robot::PickPlaceRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pr2_robot::PickPlaceRequest_<ContainerAllocator>& v)
  {
    s << indent << "test_scene_num: ";
    s << std::endl;
    Printer< ::std_msgs::Int32_<ContainerAllocator> >::stream(s, indent + "  ", v.test_scene_num);
    s << indent << "object_name: ";
    s << std::endl;
    Printer< ::std_msgs::String_<ContainerAllocator> >::stream(s, indent + "  ", v.object_name);
    s << indent << "arm_name: ";
    s << std::endl;
    Printer< ::std_msgs::String_<ContainerAllocator> >::stream(s, indent + "  ", v.arm_name);
    s << indent << "pick_pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pick_pose);
    s << indent << "place_pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.place_pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PR2_ROBOT_MESSAGE_PICKPLACEREQUEST_H
