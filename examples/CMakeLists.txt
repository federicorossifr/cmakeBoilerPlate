include_directories(PRIVATE ${PROJECT_SOURCE_DIR}/include/)

add_executable(hello hello.cc)
target_link_libraries(hello PRIVATE libname)
