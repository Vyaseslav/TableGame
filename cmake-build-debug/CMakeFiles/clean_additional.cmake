# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\TableGame_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\TableGame_autogen.dir\\ParseCache.txt"
  "TableGame_autogen"
  )
endif()
