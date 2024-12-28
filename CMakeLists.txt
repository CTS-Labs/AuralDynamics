#License: PCTSLPL v2
cmake_minimum_required(VERSION 3.2)

project(AuralDynamics VERSION 0.0.0.1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_C_STANDARD 11)




add_subdirectory(gui)
add_subdirectory(lib)
add_subdirectory(thirdparty/glfw)