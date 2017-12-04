# calc_cmake/CMakeLists.txt
cmake_minimum_required( VERSION 2.8 )
project( calc)
# This project contains a library
add_library( maths adder.cpp )
# Note: you could force CMake to always bubild a static/shared library:
#add_library( maths STATIC adder.cpp )
#add_library( maths SHARED adder.cpp )

if( NOT BUILD_SHARED_LIBS )
add_definitions( -Dmaths_STATIC )
endif()