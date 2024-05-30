add_library(Group OBJECT)

target_compile_features(Group PUBLIC ${GLOBAL_CXX_STANDARD})

target_sources(Group PRIVATE Tetrahedron.cxx Tetrahedron.hxx)

target_include_directories(Group PUBLIC "..")

target_link_libraries(learningCMake PUBLIC Group)
