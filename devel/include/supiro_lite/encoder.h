// Generated by gencpp from file supiro_lite/encoder.msg
// DO NOT EDIT!


#ifndef SUPIRO_LITE_MESSAGE_ENCODER_H
#define SUPIRO_LITE_MESSAGE_ENCODER_H


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
struct encoder_
{
  typedef encoder_<ContainerAllocator> Type;

  encoder_()
    : leftenc(0)
    , rightenc(0)  {
    }
  encoder_(const ContainerAllocator& _alloc)
    : leftenc(0)
    , rightenc(0)  {
  (void)_alloc;
    }



   typedef int16_t _leftenc_type;
  _leftenc_type leftenc;

   typedef int16_t _rightenc_type;
  _rightenc_type rightenc;





  typedef boost::shared_ptr< ::supiro_lite::encoder_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::supiro_lite::encoder_<ContainerAllocator> const> ConstPtr;

}; // struct encoder_

typedef ::supiro_lite::encoder_<std::allocator<void> > encoder;

typedef boost::shared_ptr< ::supiro_lite::encoder > encoderPtr;
typedef boost::shared_ptr< ::supiro_lite::encoder const> encoderConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::supiro_lite::encoder_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::supiro_lite::encoder_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::supiro_lite::encoder_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::supiro_lite::encoder_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::supiro_lite::encoder_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::supiro_lite::encoder_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::supiro_lite::encoder_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::supiro_lite::encoder_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::supiro_lite::encoder_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8c4b5437db1e679395a40f17a7aeba00";
  }

  static const char* value(const ::supiro_lite::encoder_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8c4b5437db1e6793ULL;
  static const uint64_t static_value2 = 0x95a40f17a7aeba00ULL;
};

template<class ContainerAllocator>
struct DataType< ::supiro_lite::encoder_<ContainerAllocator> >
{
  static const char* value()
  {
    return "supiro_lite/encoder";
  }

  static const char* value(const ::supiro_lite::encoder_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::supiro_lite::encoder_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int16 leftenc\n\
int16 rightenc\n\
\n\
";
  }

  static const char* value(const ::supiro_lite::encoder_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::supiro_lite::encoder_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.leftenc);
      stream.next(m.rightenc);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct encoder_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::supiro_lite::encoder_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::supiro_lite::encoder_<ContainerAllocator>& v)
  {
    s << indent << "leftenc: ";
    Printer<int16_t>::stream(s, indent + "  ", v.leftenc);
    s << indent << "rightenc: ";
    Printer<int16_t>::stream(s, indent + "  ", v.rightenc);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SUPIRO_LITE_MESSAGE_ENCODER_H