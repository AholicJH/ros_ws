// Generated by gencpp from file learn_action/DoDishesResult.msg
// DO NOT EDIT!


#ifndef LEARN_ACTION_MESSAGE_DODISHESRESULT_H
#define LEARN_ACTION_MESSAGE_DODISHESRESULT_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace learn_action
{
template <class ContainerAllocator>
struct DoDishesResult_
{
  typedef DoDishesResult_<ContainerAllocator> Type;

  DoDishesResult_()
    : total_dishes_cleaned(0)  {
    }
  DoDishesResult_(const ContainerAllocator& _alloc)
    : total_dishes_cleaned(0)  {
  (void)_alloc;
    }



   typedef uint32_t _total_dishes_cleaned_type;
  _total_dishes_cleaned_type total_dishes_cleaned;





  typedef boost::shared_ptr< ::learn_action::DoDishesResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::learn_action::DoDishesResult_<ContainerAllocator> const> ConstPtr;

}; // struct DoDishesResult_

typedef ::learn_action::DoDishesResult_<std::allocator<void> > DoDishesResult;

typedef boost::shared_ptr< ::learn_action::DoDishesResult > DoDishesResultPtr;
typedef boost::shared_ptr< ::learn_action::DoDishesResult const> DoDishesResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::learn_action::DoDishesResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::learn_action::DoDishesResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::learn_action::DoDishesResult_<ContainerAllocator1> & lhs, const ::learn_action::DoDishesResult_<ContainerAllocator2> & rhs)
{
  return lhs.total_dishes_cleaned == rhs.total_dishes_cleaned;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::learn_action::DoDishesResult_<ContainerAllocator1> & lhs, const ::learn_action::DoDishesResult_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace learn_action

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::learn_action::DoDishesResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::learn_action::DoDishesResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::learn_action::DoDishesResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::learn_action::DoDishesResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::learn_action::DoDishesResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::learn_action::DoDishesResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::learn_action::DoDishesResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "58faa44dda59c6545bea63ff57491cbe";
  }

  static const char* value(const ::learn_action::DoDishesResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x58faa44dda59c654ULL;
  static const uint64_t static_value2 = 0x5bea63ff57491cbeULL;
};

template<class ContainerAllocator>
struct DataType< ::learn_action::DoDishesResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "learn_action/DoDishesResult";
  }

  static const char* value(const ::learn_action::DoDishesResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::learn_action::DoDishesResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"# Define the result\n"
"\n"
"uint32 total_dishes_cleaned\n"
"\n"
;
  }

  static const char* value(const ::learn_action::DoDishesResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::learn_action::DoDishesResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.total_dishes_cleaned);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DoDishesResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::learn_action::DoDishesResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::learn_action::DoDishesResult_<ContainerAllocator>& v)
  {
    s << indent << "total_dishes_cleaned: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.total_dishes_cleaned);
  }
};

} // namespace message_operations
} // namespace ros

#endif // LEARN_ACTION_MESSAGE_DODISHESRESULT_H
