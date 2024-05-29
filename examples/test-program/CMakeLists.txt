add_executable(testProgram)

target_compile_features(testProgram PRIVATE ${GLOBAL_CXX_STANDARD})

target_sources(testProgram PRIVATE main.cxx)

target_link_libraries(testProgram PRIVATE learningCMake)
