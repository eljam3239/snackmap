# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/graphicInterface_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/graphicInterface_autogen.dir/ParseCache.txt"
  "graphicInterface_autogen"
  )
endif()
