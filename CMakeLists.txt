cmake_minimum_required(VERSION 3.8)
project(BotGUI)
set(CMAKE_CXX_STANDARD 11)
find_package(PkgConfig)
pkg_check_modules(GTKMM gtkmm-3.0)

add_subdirectory(src)
