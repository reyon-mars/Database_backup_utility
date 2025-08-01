cmake_minimum_required( VERSION 3.16 )
project(Database_backup_utility)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

#include subdirectory

add_subdirectory(cli)
add_subdirectory(core)
add_subdirectory(db_drivers)
add_subdirectory(middleware/utils)
add_subdirectory(middleware)
add_subdirectory(config)

