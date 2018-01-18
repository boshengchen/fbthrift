/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include <src/gen-py3/module/clients_wrapper.h>

namespace py3 {
namespace simple {
SimpleServiceClientWrapper::~SimpleServiceClientWrapper() {}

folly::Future<folly::Unit> SimpleServiceClientWrapper::disconnect() {
  return folly::via(
    this->async_client->getChannel()->getEventBase(),
    [this] { async_client.reset(); });
}

void SimpleServiceClientWrapper::setPersistentHeader(const std::string& key, const std::string& value) {
    auto headerChannel = async_client->getHeaderChannel();
    if (headerChannel != nullptr) {
        headerChannel->setPersistentHeader(key, value);
    }
}


folly::Future<int32_t>
SimpleServiceClientWrapper::get_five() {
 return async_client->future_get_five(
 );
}

folly::Future<int32_t>
SimpleServiceClientWrapper::add_five(
    int32_t arg_num) {
 return async_client->future_add_five(
   arg_num
 );
}

folly::Future<folly::Unit>
SimpleServiceClientWrapper::do_nothing() {
 return async_client->future_do_nothing(
 );
}

folly::Future<std::string>
SimpleServiceClientWrapper::concat(
    std::string arg_first, 
    std::string arg_second) {
 return async_client->future_concat(
   arg_first,
   arg_second
 );
}

folly::Future<int32_t>
SimpleServiceClientWrapper::get_value(
    py3::simple::SimpleStruct arg_simple_struct) {
 return async_client->future_get_value(
   arg_simple_struct
 );
}

folly::Future<bool>
SimpleServiceClientWrapper::negate(
    bool arg_input) {
 return async_client->future_negate(
   arg_input
 );
}

folly::Future<int8_t>
SimpleServiceClientWrapper::tiny(
    int8_t arg_input) {
 return async_client->future_tiny(
   arg_input
 );
}

folly::Future<int16_t>
SimpleServiceClientWrapper::small(
    int16_t arg_input) {
 return async_client->future_small(
   arg_input
 );
}

folly::Future<int64_t>
SimpleServiceClientWrapper::big(
    int64_t arg_input) {
 return async_client->future_big(
   arg_input
 );
}

folly::Future<double>
SimpleServiceClientWrapper::two(
    double arg_input) {
 return async_client->future_two(
   arg_input
 );
}

folly::Future<folly::Unit>
SimpleServiceClientWrapper::expected_exception() {
 return async_client->future_expected_exception(
 );
}

folly::Future<int32_t>
SimpleServiceClientWrapper::unexpected_exception() {
 return async_client->future_unexpected_exception(
 );
}

folly::Future<int32_t>
SimpleServiceClientWrapper::sum_i16_list(
    std::vector<int16_t> arg_numbers) {
 return async_client->future_sum_i16_list(
   arg_numbers
 );
}

folly::Future<int32_t>
SimpleServiceClientWrapper::sum_i32_list(
    std::vector<int32_t> arg_numbers) {
 return async_client->future_sum_i32_list(
   arg_numbers
 );
}

folly::Future<int32_t>
SimpleServiceClientWrapper::sum_i64_list(
    std::vector<int64_t> arg_numbers) {
 return async_client->future_sum_i64_list(
   arg_numbers
 );
}

folly::Future<std::string>
SimpleServiceClientWrapper::concat_many(
    std::vector<std::string> arg_words) {
 return async_client->future_concat_many(
   arg_words
 );
}

folly::Future<int32_t>
SimpleServiceClientWrapper::count_structs(
    std::vector<py3::simple::SimpleStruct> arg_items) {
 return async_client->future_count_structs(
   arg_items
 );
}

folly::Future<int32_t>
SimpleServiceClientWrapper::sum_set(
    std::set<int32_t> arg_numbers) {
 return async_client->future_sum_set(
   arg_numbers
 );
}

folly::Future<bool>
SimpleServiceClientWrapper::contains_word(
    std::set<std::string> arg_words, 
    std::string arg_word) {
 return async_client->future_contains_word(
   arg_words,
   arg_word
 );
}

folly::Future<std::string>
SimpleServiceClientWrapper::get_map_value(
    std::map<std::string,std::string> arg_words, 
    std::string arg_key) {
 return async_client->future_get_map_value(
   arg_words,
   arg_key
 );
}

folly::Future<int16_t>
SimpleServiceClientWrapper::map_length(
    std::map<std::string,py3::simple::SimpleStruct> arg_items) {
 return async_client->future_map_length(
   arg_items
 );
}

folly::Future<int16_t>
SimpleServiceClientWrapper::sum_map_values(
    std::map<std::string,int16_t> arg_items) {
 return async_client->future_sum_map_values(
   arg_items
 );
}

folly::Future<int32_t>
SimpleServiceClientWrapper::complex_sum_i32(
    py3::simple::ComplexStruct arg_counter) {
 return async_client->future_complex_sum_i32(
   arg_counter
 );
}

folly::Future<std::string>
SimpleServiceClientWrapper::repeat_name(
    py3::simple::ComplexStruct arg_counter) {
 return async_client->future_repeat_name(
   arg_counter
 );
}

folly::Future<py3::simple::SimpleStruct>
SimpleServiceClientWrapper::get_struct() {
 return async_client->future_get_struct(
 );
}

folly::Future<std::vector<int32_t>>
SimpleServiceClientWrapper::fib(
    int16_t arg_n) {
 return async_client->future_fib(
   arg_n
 );
}

folly::Future<std::set<std::string>>
SimpleServiceClientWrapper::unique_words(
    std::vector<std::string> arg_words) {
 return async_client->future_unique_words(
   arg_words
 );
}

folly::Future<std::map<std::string,int16_t>>
SimpleServiceClientWrapper::words_count(
    std::vector<std::string> arg_words) {
 return async_client->future_words_count(
   arg_words
 );
}

folly::Future<py3::simple::AnEnum>
SimpleServiceClientWrapper::set_enum(
    py3::simple::AnEnum arg_in_enum) {
 return async_client->future_set_enum(
   arg_in_enum
 );
}

folly::Future<std::vector<std::vector<int32_t>>>
SimpleServiceClientWrapper::list_of_lists(
    int16_t arg_num_lists, 
    int16_t arg_num_items) {
 return async_client->future_list_of_lists(
   arg_num_lists,
   arg_num_items
 );
}

folly::Future<std::map<std::string,std::map<std::string,int32_t>>>
SimpleServiceClientWrapper::word_character_frequency(
    std::string arg_sentence) {
 return async_client->future_word_character_frequency(
   arg_sentence
 );
}

folly::Future<std::vector<std::set<std::string>>>
SimpleServiceClientWrapper::list_of_sets(
    std::string arg_some_words) {
 return async_client->future_list_of_sets(
   arg_some_words
 );
}

folly::Future<int32_t>
SimpleServiceClientWrapper::nested_map_argument(
    std::map<std::string,std::vector<py3::simple::SimpleStruct>> arg_struct_map) {
 return async_client->future_nested_map_argument(
   arg_struct_map
 );
}

folly::Future<std::string>
SimpleServiceClientWrapper::make_sentence(
    std::vector<std::vector<std::string>> arg_word_chars) {
 return async_client->future_make_sentence(
   arg_word_chars
 );
}

folly::Future<std::set<int32_t>>
SimpleServiceClientWrapper::get_union(
    std::vector<std::set<int32_t>> arg_sets) {
 return async_client->future_get_union(
   arg_sets
 );
}

folly::Future<std::set<std::string>>
SimpleServiceClientWrapper::get_keys(
    std::vector<std::map<std::string,std::string>> arg_string_map) {
 return async_client->future_get_keys(
   arg_string_map
 );
}

folly::Future<double>
SimpleServiceClientWrapper::lookup_double(
    int32_t arg_key) {
 return async_client->future_lookup_double(
   arg_key
 );
}

folly::Future<std::string>
SimpleServiceClientWrapper::retrieve_binary(
    std::string arg_something) {
 return async_client->future_retrieve_binary(
   arg_something
 );
}

folly::Future<std::set<std::string>>
SimpleServiceClientWrapper::contain_binary(
    std::vector<std::string> arg_binaries) {
 return async_client->future_contain_binary(
   arg_binaries
 );
}

folly::Future<std::vector<py3::simple::AnEnum>>
SimpleServiceClientWrapper::contain_enum(
    std::vector<py3::simple::AnEnum> arg_the_enum) {
 return async_client->future_contain_enum(
   arg_the_enum
 );
}




folly::Future<int32_t>
DerivedServiceClientWrapper::get_six() {
 return async_client->future_get_six(
 );
}




folly::Future<int32_t>
RederivedServiceClientWrapper::get_seven() {
 return async_client->future_get_seven(
 );
}


} // namespace py3
} // namespace simple
