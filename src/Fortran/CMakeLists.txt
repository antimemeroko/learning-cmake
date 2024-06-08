add_library(FortranFunctions OBJECT)

target_compile_options(FortranFunctions PRIVATE GLOBAL_FORTRAN_STANDARD_OPTION)

target_sources(FortranFunctions PRIVATE functions.f90)

target_include_directories(FortranFunctions PUBLIC "..")

# Perhaps this step can be avoided if Fortran code uses bind(c).
# Should install header into build tree, then add proper path in target_include_directories
# IDE would complain on non-existing header.
# FortranCInterface_HEADER(functions.h 
                         # MACRO_NAMESPACE "FORTRAN_")

target_link_libraries(learningCMake PUBLIC FortranFunctions)
