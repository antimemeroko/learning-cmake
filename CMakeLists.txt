cmake_minimum_required(VERSION 3.26...3.29)

project(learningCMake VERSION 0.1.0 
            DESCRIPTION "My project"
            HOMEPAGE_URL "https://github.com/antimemeroko/learning-cmake"
            LANGUAGES CXX C Fortran)

# comment
if (WIN32)
  set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
  set(GLOBAL_FORTRAN_STANDARD_OPTION "-stand=f18")
  # execute_process(
    # COMMAND cmd /c "C:\\Program Files (x86)\\Intel\\oneAPI\\setvars.bat"
  # )
else()
  set(GLOBAL_FORTRAN_STANDARD_OPTION "-std=f2018")
endif()

include(FortranCInterface)
FortranCInterface_VERIFY(CXX)

set(GLOBAL_CXX_STANDARD cxx_std_20)

add_subdirectory(src)
add_subdirectory(examples)
