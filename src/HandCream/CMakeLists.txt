add_library( HandCream src/HandCream/HandCream.hpp src/HandCream/HandCream.cpp src/HandCream/UreaCream.hpp src/HandCream/UreaCream.cpp)

target_include_directories( HandCream PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src" )
