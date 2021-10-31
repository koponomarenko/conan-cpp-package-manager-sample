cmake_minimum_required(VERSION 3.20)
project(conan_cxx_package_manager_sample)

set(CMAKE_CXX_STANDARD 20)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(conan_cxx_package_manager_sample main.cpp)
target_link_libraries(conan_cxx_package_manager_sample ${CONAN_LIBS})