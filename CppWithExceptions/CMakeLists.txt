cmake_minimum_required(VERSION 3.16)

project(CppWithExceptions LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(CppWithExceptions main.cpp
    mypoint.h mypoint.cpp)

include(GNUInstallDirs)
install(TARGETS CppWithExceptions
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
