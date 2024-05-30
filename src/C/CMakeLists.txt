add_library(Cfunctions OBJECT)

target_compile_features(Cfunctions PUBLIC c_std_17)

target_sources(Cfunctions PRIVATE function_1.c function_1.h)

target_include_directories(Cfunctions PUBLIC "..")

target_link_libraries(learningCMake PUBLIC Cfunctions)
