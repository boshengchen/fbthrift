/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include <src/gen-py3/module/clients_wrapper.h>

namespace cpp2 {
RaiserClientWrapper::~RaiserClientWrapper() {}

folly::Future<folly::Unit> RaiserClientWrapper::disconnect() {
  return folly::via(
    this->async_client->getChannel()->getEventBase(),
    [this] { async_client.reset(); });
}

void RaiserClientWrapper::setPersistentHeader(const std::string& key, const std::string& value) {
    auto headerChannel = async_client->getHeaderChannel();
    if (headerChannel != nullptr) {
        headerChannel->setPersistentHeader(key, value);
    }
}


folly::Future<folly::Unit>
RaiserClientWrapper::doBland() {
 return async_client->future_doBland(
 );
}

folly::Future<folly::Unit>
RaiserClientWrapper::doRaise() {
 return async_client->future_doRaise(
 );
}

folly::Future<std::string>
RaiserClientWrapper::get200() {
 return async_client->future_get200(
 );
}

folly::Future<std::string>
RaiserClientWrapper::get500() {
 return async_client->future_get500(
 );
}


} // namespace cpp2
