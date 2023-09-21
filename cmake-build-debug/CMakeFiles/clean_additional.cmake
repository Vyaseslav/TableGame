# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\GameTest_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\GameTest_autogen.dir\\ParseCache.txt"
  "GameTest_autogen"
  )
endif()
