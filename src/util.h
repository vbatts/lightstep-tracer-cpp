// -*- Mode: C++ -*-
#ifndef __LIGHTSTEP_UTIL_H__
#define __LIGHTSTEP_UTIL_H__

#include <string>

#include "lightstep_thrift/lightstep_types.h"

namespace lightstep {
namespace util {

std::string id_to_string(uint64_t);
std::string program_name();

uint64_t to_micros(TimeStamp t);

lightstep_thrift::KeyValue make_kv(const std::string& key, const std::string& value);
lightstep_thrift::TraceJoinId make_join(const std::string& key, const std::string& value);

}  // namespace util 
}  // namespace lightstep

#endif // __LIGHTSTEP_UTIL_H__
