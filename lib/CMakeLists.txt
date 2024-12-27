cmake_minimum_required(VERSION 3.2)
project(AuralDynamicsAPI)

find_package(OpenAL REQUIRED)

set(SOURCE_DIR src)
file(GLOB_RECURSE SOURCES "${SOURCE_DIR}/*.cpp")

add_library(AuralDynamics SOURCES SHARED)
target_link_libraries(AuralDynamics OpenAL)