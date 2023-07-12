file(GLOB_RECURSE SRCS *.cc)

add_library(message STATIC ${SRCS})
