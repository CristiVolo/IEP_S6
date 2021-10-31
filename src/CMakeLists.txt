cmake_minimum_required( VERSION 3.2 )

project( IEP_S6 )

add_executable( main main.cpp )

install( TARGETS main DESTINATION out )

set( CMAKE_CXX_STANDARD 14 )

set( CMAKE_CXX_STANDARD_REQUIRED ON )

set( CMAKE_CXX_EXTENSIONS OFF )
