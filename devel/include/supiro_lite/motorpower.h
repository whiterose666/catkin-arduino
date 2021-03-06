// Generated by gencpp from file supiro_lite/motorpower.msg
// DO NOT EDIT!


#ifndef SUPIRO_LITE_MESSAGE_MOTORPOWER_H
#define SUPIRO_LITE_MESSAGE_MOTORPOWER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace supiro_lite
{
template <class ContainerAllocator>
struct motorpower_
{
  typedef motorpower_<ContainerAllocator> Type;

  motorpower_()
    : leftpwr(0)
    , rightpwr(0)
    , leftdir(0)
    , rightdir(0)  {
    }
  motorpower_(const ContainerAllocator& _alloc)
    : leftpwr(0)
    , rightpwr(0)
    , leftdir(0)
    , rightdir(0)  {
  (void)_alloc;
    }



   typedef int16_t _leftpwr_type;
  _leftpwr_type leftpwr;

   typedef int16_t _rightpwr_type;
  _rightpwr_type rightpwr;

   typedef int16_t _leftdir_type;
  _leftdir_type leftdir;

   typedef int16_t _rightdir_type;
  _rightdir_type rightdir;





  typedef boost::shared_ptr< ::supiro_lite::motorpower_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::supiro_lite::motorpower_<ContainerAllocator> const> ConstPtr;

}; // struct motorpower_

typedef ::supiro_lite::motorpower_<std::allocator<void> > motorpower;

typedef boost::shared_ptr< ::supiro_lite::motorpower > motorpowerPtr;
typedef boost::shared_ptr< ::supiro_lite::motorpower const> motorpowerConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::supiro_lite::motorpower_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::supiro_lite::motorpower_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace supiro_lite

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'supiro_lite': ['/home/danu/catkin_custom/catkin_arduino/src/supiro_lite/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::supiro_lite::motorpower_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::supiro_lite::motorpower_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::supiro_lite::motorpower_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::supiro_lite::motorpower_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::supiro_lite::motorpower_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::supiro_lite::motorpower_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::supiro_lite::motorpower_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0ec0221cf467c083d5f32af96e0b92dc";
  }

  static const char* value(const ::supiro_lite::motorpower_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0ec0221cf467c083ULL;
  static const uint64_t static_value2 = 0xd5f32af96e0b92dcULL;
};

template<class ContainerAllocator>
struct DataType< ::supiro_lite::motorpower_<ContainerAllocator> >
{
  static const char* value()
  {
    return "supiro_lite/motorpower";
  }

  static const char* value(const ::supiro_lite::motorpower_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::supiro_lite::motorpower_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int16 leftpwr\n\
int16 rightpwr\n\
int16 leftdir\n\
int16 rightdir\n\
";
  }

  static const char* value(const ::supiro_lite::motorpower_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::supiro_lite::motorpower_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.leftpwr);
      stream.next(m.rightpwr);
      stream.next(m.leftdir);
      stream.next(m.rightdir);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct motorpower_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::supiro_lite::motorpower_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::supiro_lite::motorpower_<ContainerAllocator>& v)
  {
    s << indent << "leftpwr: ";
    Printer<int16_t>::stream(s, indent + "  ", v.leftpwr);
    s << indent << "rightpwr: ";
    Printer<int16_t>::stream(s, indent + "  ", v.rightpwr);
    s << indent << "leftdir: ";
    Printer<int16_t>::stream(s, indent + "  ", v.leftdir);
    s << indent << "rightdir: ";
    Printer<int16_t>::stream(s, indent + "  ", v.rightdir);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SUPIRO_LITE_MESSAGE_MOTORPOWER_H
