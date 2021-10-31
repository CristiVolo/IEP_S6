cmake_minimum_required( VERSION 3.2 )
project( IEP_S6 )

set( CMAKE_CXX_STANDARD 14 )
set( CMAKE_CXX_STANDARD_REQUIRED ON )
set( CMAKE_CXX_EXTENSIONS OFF )

add_subdirectory( Corporation )
add_subdirectory( Processor )
#add_subdirectory( Main )

add_executable( IEP_S6 main.cpp )

# add libraries in executable; because of the PUBLIC specifier, the executable also inherit the include directory of that library   
target_link_libraries( IEP_S6 PRIVATE Corporation Processor )
