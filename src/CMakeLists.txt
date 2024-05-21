add_subdirectory(Group)

add_library(learningCMake SHARED)
target_compile_features(learningCMake PRIVATE cxx_std_20)
target_include_directories(learningCMake PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
# it seems that the following options are equivalent
# target_sources(learningCMake PRIVATE $<TARGET_OBJECTS:Group>)
target_link_libraries(learningCMake PRIVATE Group)
