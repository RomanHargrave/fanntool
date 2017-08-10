cmake_minimum_required(VERSION 2.8.0)
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")

project(fanntool)

find_package(FANN)

set(FLTK_SKIP_OPENGL true)
find_package(FLTK)

find_package(XPM)

include_directories(
   include
   ${FANN_INCLUDE_DIRS}
   ${FLTK_INCLUDE_DIRS}
   ${XPM_INCLUDE_DIRS}
   )

set(FT_LINK
   ${FLTK_LIBRARIES}
   ${FANN_LIBRARIES}
   ${XPM_LIBRARIES}
   )

set(FT_SOURCE
   src/rotated.cc

   src/data_process.cc
   # src/file_select.cc

   src/fltk_plotxy.cc
   src/fltk_ext_file_chooser.cc
   )

# Input domain normalizer
add_executable(fanntool src/fanntool_main.cc ${FT_SOURCE})
target_link_libraries(fanntool ${FT_LINK})
