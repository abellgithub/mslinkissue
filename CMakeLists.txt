add_library(jsonlib STATIC json.cpp)

add_library(jsonuserlib SHARED jsonuser.cpp)
target_link_libraries(jsonuserlib
	jsonlib)
add_library(arbiterlib STATIC arbiter.cpp)

add_executable(myprog
	mytest.cpp)

target_link_libraries(myprog
	-verbose
	jsonuserlib
	arbiterlib
	jsonlib
)
