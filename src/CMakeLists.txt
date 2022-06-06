add_library(libname ./Hello.cc)

target_include_directories(libname PRIVATE 
${PROJECT_SOURCE_DIR}/include/)
