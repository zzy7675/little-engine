cmake_minimum_required(VERSION 3.20)

project(vl-engine)

find_package(glfw3 CONFIG REQUIRED)
find_package(glm CONFIG REQUIRED)
find_package(Vulkan REQUIRED)

add_executable(vl-engine app.cpp app.hpp main.cpp vl_window.cpp vl_window.hpp vl_pipeline.cpp vl_pipeline.hpp)

target_link_libraries(vl-engine PRIVATE glfw)
target_link_libraries(vl-engine PRIVATE glm::glm)
target_link_libraries(vl-engine PRIVATE Vulkan::Vulkan)

