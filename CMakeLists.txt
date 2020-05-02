cmake_minimum_required(VERSION 3.16)
project(tksort)

set(CMAKE_CXX_STANDARD 14)

add_library(TaskLibs
        TaskNode.cpp
        TaskCollector.cpp
        PriorityAssignor.cpp
        TopologicalSorter.cpp
        TaskExporter.cpp
)

add_executable(tksort main.cpp)
target_link_libraries(tksort TaskLibs)
