add_library(Group OBJECT)
target_sources(Group PRIVATE Tetrahedron.cxx Tetrahedron.hxx)
target_include_directories(Group PUBLIC "${CMAKE_SOURCE_DIR}/src")
