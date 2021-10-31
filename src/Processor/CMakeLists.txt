add_library( Processor src/Processor/Processor.hpp src/Processor/Processor.cpp )

target_include_directories( Processor PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src" )
