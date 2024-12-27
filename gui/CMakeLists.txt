cmake_minimum_required(VERSION 3.2)
project(AuralDynamicsGUI)

find_package(OpenGL REQUIRED)
find_package (OpenAL REQUIRED)

set(SOURCE_DIR src)
file(GLOB_RECURSE SOURCES "${SOURCE_DIR}/*.cpp")