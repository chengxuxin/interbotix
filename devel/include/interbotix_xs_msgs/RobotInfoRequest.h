// Generated by gencpp from file interbotix_xs_msgs/RobotInfoRequest.msg
// DO NOT EDIT!


#ifndef INTERBOTIX_XS_MSGS_MESSAGE_ROBOTINFOREQUEST_H
#define INTERBOTIX_XS_MSGS_MESSAGE_ROBOTINFOREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace interbotix_xs_msgs
{
template <class ContainerAllocator>
struct RobotInfoRequest_
{
  typedef RobotInfoRequest_<ContainerAllocator> Type;

  RobotInfoRequest_()
    : cmd_type()
    , name()  {
    }
  RobotInfoRequest_(const ContainerAllocator& _alloc)
    : cmd_type(_alloc)
    , name(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _cmd_type_type;
  _cmd_type_type cmd_type;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;





  typedef boost::shared_ptr< ::interbotix_xs_msgs::RobotInfoRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::interbotix_xs_msgs::RobotInfoRequest_<ContainerAllocator> const> ConstPtr;

}; // struct RobotInfoRequest_

typedef ::interbotix_xs_msgs::RobotInfoRequest_<std::allocator<void> > RobotInfoRequest;

typedef boost::shared_ptr< ::interbotix_xs_msgs::RobotInfoRequest > RobotInfoRequestPtr;
typedef boost::shared_ptr< ::interbotix_xs_msgs::RobotInfoRequest const> RobotInfoRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::interbotix_xs_msgs::RobotInfoRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::interbotix_xs_msgs::RobotInfoRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::interbotix_xs_msgs::RobotInfoRequest_<ContainerAllocator1> & lhs, const ::interbotix_xs_msgs::RobotInfoRequest_<ContainerAllocator2> & rhs)
{
  return lhs.cmd_type == rhs.cmd_type &&
    lhs.name == rhs.name;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::interbotix_xs_msgs::RobotInfoRequest_<ContainerAllocator1> & lhs, const ::interbotix_xs_msgs::RobotInfoRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace interbotix_xs_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::interbotix_xs_msgs::RobotInfoRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::interbotix_xs_msgs::RobotInfoRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::interbotix_xs_msgs::RobotInfoRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::interbotix_xs_msgs::RobotInfoRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::interbotix_xs_msgs::RobotInfoRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::interbotix_xs_msgs::RobotInfoRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::interbotix_xs_msgs::RobotInfoRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "81f769be1f5fc7b940e801609273b513";
  }

  static const char* value(const ::interbotix_xs_msgs::RobotInfoRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x81f769be1f5fc7b9ULL;
  static const uint64_t static_value2 = 0x40e801609273b513ULL;
};

template<class ContainerAllocator>
struct DataType< ::interbotix_xs_msgs::RobotInfoRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "interbotix_xs_msgs/RobotInfoRequest";
  }

  static const char* value(const ::interbotix_xs_msgs::RobotInfoRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::interbotix_xs_msgs::RobotInfoRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Get robot information\n"
"#\n"
"# Note that if a 'gripper' joint is specified, all information will be specified in terms of the 'left_finger' joint\n"
"\n"
"string cmd_type                          # set to 'group' if requesting info about a joint group or 'single' if requesting info about a single joint\n"
"string name                              # the group name if requesting info about a group or the joint name if requesting info about a single joint\n"
;
  }

  static const char* value(const ::interbotix_xs_msgs::RobotInfoRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::interbotix_xs_msgs::RobotInfoRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.cmd_type);
      stream.next(m.name);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RobotInfoRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::interbotix_xs_msgs::RobotInfoRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::interbotix_xs_msgs::RobotInfoRequest_<ContainerAllocator>& v)
  {
    s << indent << "cmd_type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.cmd_type);
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INTERBOTIX_XS_MSGS_MESSAGE_ROBOTINFOREQUEST_H
