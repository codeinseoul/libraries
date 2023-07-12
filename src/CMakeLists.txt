include_directories(.)
include_directories(../lib)

file(GLOB_RECURSE SRCS *.cc)

add_executable(libraries ${SRCS})

target_link_libraries(libraries message)
