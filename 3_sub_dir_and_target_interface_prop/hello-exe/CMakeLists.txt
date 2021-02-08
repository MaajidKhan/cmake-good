add_executable(cmake-good main.cpp)

target_link_libraries(cmake-good PRIVATE say-hello) #say-hello is a target and cmake-good is a executable

# since "{CMAKE_CURRENT_SOURCE_DIR}/src" was declared as include dir and was made public, this path would be inherited
# as an include_dir even here



