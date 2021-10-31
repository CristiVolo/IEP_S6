add_library( Corporation src/Corporation/Corporation.hpp src/Corporation/Corporation.cpp )

target_include_directories( Corporation PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src" )
