// Generated by gencpp from file rover_msgs/WheelVelocity.msg
// DO NOT EDIT!


#ifndef ROVER_MSGS_MESSAGE_WHEELVELOCITY_H
#define ROVER_MSGS_MESSAGE_WHEELVELOCITY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rover_msgs
{
template <class ContainerAllocator>
struct WheelVelocity_
{
  typedef WheelVelocity_<ContainerAllocator> Type;

  WheelVelocity_()
    : left_front_vel(0.0)
    , right_front_vel(0.0)
    , left_middle_vel(0.0)
    , right_middle_vel(0.0)
    , left_back_vel(0.0)
    , right_back_vel(0.0)  {
    }
  WheelVelocity_(const ContainerAllocator& _alloc)
    : left_front_vel(0.0)
    , right_front_vel(0.0)
    , left_middle_vel(0.0)
    , right_middle_vel(0.0)
    , left_back_vel(0.0)
    , right_back_vel(0.0)  {
  (void)_alloc;
    }



   typedef double _left_front_vel_type;
  _left_front_vel_type left_front_vel;

   typedef double _right_front_vel_type;
  _right_front_vel_type right_front_vel;

   typedef double _left_middle_vel_type;
  _left_middle_vel_type left_middle_vel;

   typedef double _right_middle_vel_type;
  _right_middle_vel_type right_middle_vel;

   typedef double _left_back_vel_type;
  _left_back_vel_type left_back_vel;

   typedef double _right_back_vel_type;
  _right_back_vel_type right_back_vel;




  typedef boost::shared_ptr< ::rover_msgs::WheelVelocity_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rover_msgs::WheelVelocity_<ContainerAllocator> const> ConstPtr;

}; // struct WheelVelocity_

typedef ::rover_msgs::WheelVelocity_<std::allocator<void> > WheelVelocity;

typedef boost::shared_ptr< ::rover_msgs::WheelVelocity > WheelVelocityPtr;
typedef boost::shared_ptr< ::rover_msgs::WheelVelocity const> WheelVelocityConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rover_msgs::WheelVelocity_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rover_msgs::WheelVelocity_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rover_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'rover_msgs': ['/home/achu/Documents/rover-control/src/rover_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rover_msgs::WheelVelocity_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rover_msgs::WheelVelocity_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rover_msgs::WheelVelocity_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rover_msgs::WheelVelocity_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rover_msgs::WheelVelocity_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rover_msgs::WheelVelocity_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rover_msgs::WheelVelocity_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0d2806f4fca14fdb81a14e092651232e";
  }

  static const char* value(const ::rover_msgs::WheelVelocity_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0d2806f4fca14fdbULL;
  static const uint64_t static_value2 = 0x81a14e092651232eULL;
};

template<class ContainerAllocator>
struct DataType< ::rover_msgs::WheelVelocity_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rover_msgs/WheelVelocity";
  }

  static const char* value(const ::rover_msgs::WheelVelocity_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rover_msgs::WheelVelocity_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 left_front_vel\n\
float64 right_front_vel\n\
float64 left_middle_vel\n\
float64 right_middle_vel\n\
float64 left_back_vel\n\
float64 right_back_vel\n\
\n\
";
  }

  static const char* value(const ::rover_msgs::WheelVelocity_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rover_msgs::WheelVelocity_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.left_front_vel);
      stream.next(m.right_front_vel);
      stream.next(m.left_middle_vel);
      stream.next(m.right_middle_vel);
      stream.next(m.left_back_vel);
      stream.next(m.right_back_vel);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WheelVelocity_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rover_msgs::WheelVelocity_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rover_msgs::WheelVelocity_<ContainerAllocator>& v)
  {
    s << indent << "left_front_vel: ";
    Printer<double>::stream(s, indent + "  ", v.left_front_vel);
    s << indent << "right_front_vel: ";
    Printer<double>::stream(s, indent + "  ", v.right_front_vel);
    s << indent << "left_middle_vel: ";
    Printer<double>::stream(s, indent + "  ", v.left_middle_vel);
    s << indent << "right_middle_vel: ";
    Printer<double>::stream(s, indent + "  ", v.right_middle_vel);
    s << indent << "left_back_vel: ";
    Printer<double>::stream(s, indent + "  ", v.left_back_vel);
    s << indent << "right_back_vel: ";
    Printer<double>::stream(s, indent + "  ", v.right_back_vel);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROVER_MSGS_MESSAGE_WHEELVELOCITY_H
