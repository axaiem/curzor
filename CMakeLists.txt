cmake_minimum_required(VERSION 3.16)
project(curzor)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)

# Find Qt6 and its components
find_package(Qt6 REQUIRED COMPONENTS Widgets)

# Add the executable
add_executable(curzor main.cpp)

# Link Qt libraries automatically
target_link_libraries(curzor Qt6::Widgets)
