include(../../max-sdk-base/script/max-pretarget.cmake)

include_directories(
		"${MAX_SDK_INCLUDES}"
		"${MAX_SDK_MSP_INCLUDES}"
		"${MAX_SDK_JIT_INCLUDES}"
		"${PXSPR_LTC_COMMON_INCLUDES}"
)

set(PROJECT_SRC
		"pxspr.ltc.encode~.c"
		"${MAX_SDK_INCLUDES}/common/commonsyms.c"
)

add_library(
		${PROJECT_NAME}
		MODULE
		${PROJECT_SRC}
)

target_link_libraries(
		${PROJECT_NAME}
		PRIVATE
		ltc
)

include(../../max-sdk-base/script/max-posttarget.cmake)