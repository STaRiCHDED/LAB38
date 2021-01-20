// Copyright 2020 Nikita Klimov nik179804@gmail.com


#ifndef INCLUDE_REQUEST_PARAMETRS_H_
#define INCLUDE_REQUEST_PARAMETRS_H_
#include <string>

struct Request_parametrs {
  std::string url;
  std::string host;
  std::string port;
  std::string target;
  std::string request_body;
  int version;
};
#endif  // INCLUDE_REQUEST_PARAMETRS_H_
