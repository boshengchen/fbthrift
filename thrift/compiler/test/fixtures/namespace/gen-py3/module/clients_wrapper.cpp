/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include <src/gen-py3/module/clients_wrapper.h>

namespace cpp2 {
TestServiceClientWrapper::~TestServiceClientWrapper() {}

folly::Future<folly::Unit> TestServiceClientWrapper::disconnect() {
  return folly::via(
    this->async_client->getChannel()->getEventBase(),
    [this] { async_client.reset(); });
}

void TestServiceClientWrapper::setPersistentHeader(const std::string& key, const std::string& value) {
    auto headerChannel = async_client->getHeaderChannel();
    if (headerChannel != nullptr) {
        headerChannel->setPersistentHeader(key, value);
    }
}


folly::Future<int64_t>
TestServiceClientWrapper::init(
    int64_t arg_int1) {
 return async_client->future_init(
   arg_int1
 );
}


} // namespace cpp2
