/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once
#include <thrift/lib/cpp2/async/RequestChannel.h>
#include <src/gen-cpp2/MyService.h>
#include <src/gen-cpp2/MyServiceFast.h>
#include <src/gen-cpp2/MyServiceEmpty.h>
#include <src/gen-cpp2/MyServicePrioParent.h>
#include <src/gen-cpp2/MyServicePrioChild.h>

#include <folly/futures/Future.h>
#include <folly/futures/Promise.h>
#include <folly/Unit.h>

#include <cstdint>
#include <functional>
#include <map>
#include <memory>
#include <set>
#include <vector>

namespace cpp2 {

typedef std::shared_ptr<apache::thrift::RequestChannel> RequestChannel_ptr;

class MyServiceClientWrapper {
  protected:
    std::unique_ptr<cpp2::MyServiceAsyncClient> async_client;

  public:
    explicit MyServiceClientWrapper(
        std::unique_ptr<cpp2::MyServiceAsyncClient> client)
        : async_client(std::move(client)) { }
    explicit MyServiceClientWrapper(RequestChannel_ptr channel)
        : MyServiceClientWrapper(std::make_unique<cpp2::MyServiceAsyncClient>(channel))  { }

    virtual ~MyServiceClientWrapper();
    folly::Future<folly::Unit> disconnect();
    void setPersistentHeader(const std::string& key, const std::string& value);

    folly::Future<folly::Unit> ping();
    folly::Future<std::string> getRandomData();
    folly::Future<bool> hasDataById(
      int64_t arg_id);
    folly::Future<std::string> getDataById(
      int64_t arg_id);
    folly::Future<folly::Unit> putDataById(
      int64_t arg_id, 
      std::string arg_data);
    folly::Future<folly::Unit> lobDataById(
      int64_t arg_id, 
      std::string arg_data);
};


class MyServiceFastClientWrapper {
  protected:
    std::unique_ptr<cpp2::MyServiceFastAsyncClient> async_client;

  public:
    explicit MyServiceFastClientWrapper(
        std::unique_ptr<cpp2::MyServiceFastAsyncClient> client)
        : async_client(std::move(client)) { }
    explicit MyServiceFastClientWrapper(RequestChannel_ptr channel)
        : MyServiceFastClientWrapper(std::make_unique<cpp2::MyServiceFastAsyncClient>(channel))  { }

    virtual ~MyServiceFastClientWrapper();
    folly::Future<folly::Unit> disconnect();
    void setPersistentHeader(const std::string& key, const std::string& value);

    folly::Future<folly::Unit> ping();
    folly::Future<std::string> getRandomData();
    folly::Future<bool> hasDataById(
      int64_t arg_id);
    folly::Future<std::string> getDataById(
      int64_t arg_id);
    folly::Future<folly::Unit> putDataById(
      int64_t arg_id, 
      std::string arg_data);
    folly::Future<folly::Unit> lobDataById(
      int64_t arg_id, 
      std::string arg_data);
};


class MyServiceEmptyClientWrapper {
  protected:
    std::unique_ptr<cpp2::MyServiceEmptyAsyncClient> async_client;

  public:
    explicit MyServiceEmptyClientWrapper(
        std::unique_ptr<cpp2::MyServiceEmptyAsyncClient> client)
        : async_client(std::move(client)) { }
    explicit MyServiceEmptyClientWrapper(RequestChannel_ptr channel)
        : MyServiceEmptyClientWrapper(std::make_unique<cpp2::MyServiceEmptyAsyncClient>(channel))  { }

    virtual ~MyServiceEmptyClientWrapper();
    folly::Future<folly::Unit> disconnect();
    void setPersistentHeader(const std::string& key, const std::string& value);

};


class MyServicePrioParentClientWrapper {
  protected:
    std::unique_ptr<cpp2::MyServicePrioParentAsyncClient> async_client;

  public:
    explicit MyServicePrioParentClientWrapper(
        std::unique_ptr<cpp2::MyServicePrioParentAsyncClient> client)
        : async_client(std::move(client)) { }
    explicit MyServicePrioParentClientWrapper(RequestChannel_ptr channel)
        : MyServicePrioParentClientWrapper(std::make_unique<cpp2::MyServicePrioParentAsyncClient>(channel))  { }

    virtual ~MyServicePrioParentClientWrapper();
    folly::Future<folly::Unit> disconnect();
    void setPersistentHeader(const std::string& key, const std::string& value);

    folly::Future<folly::Unit> ping();
    folly::Future<folly::Unit> pong();
};


class MyServicePrioChildClientWrapper : public cpp2::MyServicePrioParentClientWrapper {
  protected:
    std::unique_ptr<cpp2::MyServicePrioChildAsyncClient> async_client;

  public:
    explicit MyServicePrioChildClientWrapper(
        std::unique_ptr<cpp2::MyServicePrioChildAsyncClient> client)
        : MyServicePrioParentClientWrapper(std::move(client)) { }
    explicit MyServicePrioChildClientWrapper(RequestChannel_ptr channel)
        : MyServicePrioChildClientWrapper(std::make_unique<cpp2::MyServicePrioChildAsyncClient>(channel))  { }


    folly::Future<folly::Unit> pang();
};


} // namespace cpp2
