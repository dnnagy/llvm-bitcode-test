cmake_minimum_required(VERSION 3.10.0)
project(llvm-bitcode-test)

set(CMAKE_CXX_COMPILER em++)

add_executable(hello hello.cpp)
target_compile_options(hello PUBLIC ${CMAKE_CXX_FLAGS} -flto)
