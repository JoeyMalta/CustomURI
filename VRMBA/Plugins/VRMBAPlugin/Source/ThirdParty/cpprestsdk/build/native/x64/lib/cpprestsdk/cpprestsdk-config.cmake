include(CMakeFindDependencyMacro)
if(ON)
  find_dependency(ZLIB)
endif()

if(OFF)
  find_dependency(unofficial-brotli)
endif()

if(ON)
  find_dependency(OpenSSL)
endif()

if(ON AND OFF)
  if(UNIX)
    find_dependency(Boost COMPONENTS random system thread filesystem chrono atomic date_time regex)
  else()
    find_dependency(Boost COMPONENTS system date_time regex)
  endif()
endif()
include("${CMAKE_CURRENT_LIST_DIR}/cpprestsdk-targets.cmake")