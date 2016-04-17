cmake_minimum_required(VERSION 3.5)

set(Boost_USE_STATIC_LIBS        ON) # only find static libs
set(Boost_USE_MULTITHREADED      ON)
set(Boost_USE_STATIC_RUNTIME    OFF)
find_package(Boost 1.58.0 REQUIRED COMPONENTS filesystem)

include_directories(${Boost_INCLUDE_DIRS}) 
add_executable(hello main.cxx)
target_link_libraries(hello ${Boost_LIBRARIES})
target_compile_features(hello PUBLIC cxx_auto_type)
add_custom_target(run ALL ./hello DEPENDS hello)
