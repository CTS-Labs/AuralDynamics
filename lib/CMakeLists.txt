cmake_minimum_required(VERSION 3.2)
project(AuralDynamicsAPI)

find_package(OpenAL REQUIRED)
file(GLOB_RECURSE SOURCES "src/*.cpp")

add_library(AuralDynamics SOURCES SHARED)
target_link_libraries(AuralDynamics OpenAL)