include_directories(PRIVATE ${PROJECT_SOURCE_DIR}/include/)

add_executable(hello_say test_say.cc)
target_link_libraries(hello_say PRIVATE libname)

add_test(hello_say hello_say)