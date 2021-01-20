// Copyright 2020 Nikita Klimov nik179804@gmail.com


#ifndef INCLUDE_URL_H_
#define INCLUDE_URL_H_
#include <string>

const char k_protocol_name[] = "http://";
const size_t k_size_name_of_protocol = 7;

class URL {
 public:
  explicit URL(std::string url);
  std::string parse_url();
  std::string parse_url_to_host();
  std::string parse_url_to_port();
  std::string parse_url_to_target();

 private:
  std::string url_;
};

#endif  // INCLUDE_URL_H_
