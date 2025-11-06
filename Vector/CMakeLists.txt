add_library(Vector src/Vector.cpp)

target_include_directories(Vector
PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}/include
)