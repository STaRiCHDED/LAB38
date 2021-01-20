// Copyright 2020 Nikita Klimov nik179804@gmail.com


#include <CLIENT.hpp>

int main(int argc, char* argv[]) {
  Client client(argc, argv);
  return client.Run();
}
//./cmake-build-debug/demo  http://localhost:8080/v1/api/suggest
//{\"input\":\"hel\"}