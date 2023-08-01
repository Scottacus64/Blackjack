# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "BlackjackUI_autogen"
  "CMakeFiles/BlackjackUI_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/BlackjackUI_autogen.dir/ParseCache.txt"
  )
endif()
