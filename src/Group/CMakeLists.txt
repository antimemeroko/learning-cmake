add_library(Group OBJECT)

target_compile_features(Group PUBLIC ${GLOBAL_CXX_STANDARD})

target_sources(Group PRIVATE Tetrahedron.cxx Tetrahedron.hxx)

target_include_directories(Group PUBLIC "..")

# it seems that the following line works
# target_sources(learningCMake PRIVATE $<TARGET_OBJECTS:Group>)

# but this one is preferable
target_link_libraries(learningCMake PUBLIC Group)
