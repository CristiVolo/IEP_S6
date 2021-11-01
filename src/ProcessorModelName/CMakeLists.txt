add_library( ProcessorModelName src/ProcessorModelName/ProcessorModelName.hpp src/ProcessorModelName/ProcessorModelName.cpp )

target_include_directories( ProcessorModelName PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src" )
