/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "src/gen-cpp2/module_types.h"
#include "src/gen-cpp2/module_types.tcc"

#include <algorithm>
#include <folly/Indestructible.h>

#include "src/gen-cpp2/module_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits< ::cpp2::BasicTypes>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "first") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_I32;
  }
  else if (_fname == "second") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_I32;
  }
  else if (_fname == "third") {
    fid = 3;
    _ftype = apache::thrift::protocol::T_I64;
  }
  else if (_fname == "isTrue") {
    fid = 4;
    _ftype = apache::thrift::protocol::T_BOOL;
  }
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

BasicTypes::BasicTypes(apache::thrift::FragileConstructor, int32_t first__arg, int32_t second__arg, int64_t third__arg, bool isTrue__arg) :
    first(std::move(first__arg)),
    second(std::move(second__arg)),
    third(std::move(third__arg)),
    isTrue(std::move(isTrue__arg)) {
  __isset.second = true;
  __isset.third = true;
  __isset.isTrue = true;
}

void BasicTypes::__clear() {
  // clear all fields
  first = 0;
  second = 0;
  third = 0;
  isTrue = 0;
  __isset = {};
}

bool BasicTypes::operator==(const BasicTypes& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.first == rhs.first)) {
    return false;
  }
  if (lhs.__isset.second != rhs.__isset.second) {
    return false;
  }
  if (lhs.__isset.second) {
    if (!(lhs.second == rhs.second)) {
      return false;
    }
  }
  if (lhs.__isset.third != rhs.__isset.third) {
    return false;
  }
  if (lhs.__isset.third) {
    if (!(lhs.third == rhs.third)) {
      return false;
    }
  }
  if (!(lhs.isTrue == rhs.isTrue)) {
    return false;
  }
  return true;
}

bool BasicTypes::operator<(const BasicTypes& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.first == rhs.first)) {
    return lhs.first < rhs.first;
  }
  if (lhs.__isset.second != rhs.__isset.second) {
    return lhs.__isset.second < rhs.__isset.second;
  }
  if (lhs.__isset.second) {
    if (!(lhs.second == rhs.second)) {
      return lhs.second < rhs.second;
    }
  }
  if (lhs.__isset.third != rhs.__isset.third) {
    return lhs.__isset.third < rhs.__isset.third;
  }
  if (lhs.__isset.third) {
    if (!(lhs.third == rhs.third)) {
      return lhs.third < rhs.third;
    }
  }
  if (!(lhs.isTrue == rhs.isTrue)) {
    return lhs.isTrue < rhs.isTrue;
  }
  return false;
}


void swap(BasicTypes& a, BasicTypes& b) {
  using ::std::swap;
  swap(a.first, b.first);
  swap(a.second, b.second);
  swap(a.third, b.third);
  swap(a.isTrue, b.isTrue);
  swap(a.__isset, b.__isset);
}

template void BasicTypes::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t BasicTypes::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t BasicTypes::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t BasicTypes::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void BasicTypes::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t BasicTypes::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t BasicTypes::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t BasicTypes::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
