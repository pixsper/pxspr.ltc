cmake_minimum_required(VERSION 3.19)

add_library(ltc STATIC)
target_include_directories(ltc PUBLIC "libltc/src")

target_sources(ltc PRIVATE
		"libltc/src/ltc.c" 
		"libltc/src/decoder.c"
		"libltc/src/encoder.c"
		"libltc/src/timecode.c"
)

add_subdirectory(pxspr.ltc)