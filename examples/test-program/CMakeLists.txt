add_executable(testProgram)
target_compile_features(testProgram PRIVATE cxx_std_20)
target_sources(testProgram PRIVATE main.cxx)
target_link_libraries(testProgram PRIVATE learningCMake)
