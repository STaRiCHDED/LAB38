// Copyright 2020 Nikita Klimov nik179804@gmail.com

#ifndef INCLUDE_CLIENT_H_
#define INCLUDE_CLIENT_H_
#include <boost/asio/connect.hpp>
#include <boost/asio/ip/tcp.hpp>
#include <boost/beast/core.hpp>
#include <boost/beast/http.hpp>
#include <boost/beast/version.hpp>
#include <cstdlib>
#include <iostream>
#include <string>

#include "REQUEST_PAR.hpp"
#include "URL.hpp"

namespace beast = boost::beast;  // from <boost/beast.hpp>
namespace http = beast::http;    // from <boost/beast/http.hpp>
namespace net = boost::asio;     // from <boost/asio.hpp>
using tcp = net::ip::tcp;        // from <boost/asio/ip/tcp.hpp>

class Client {
 public:
  Client(int argc, char* argv[]);
  int Run();

 private:
  void prepareCommandLine();
  int argc_;
  char** argv_;
  Request_parametrs parametrs;
};

#endif  // INCLUDE_CLIENT_H_
