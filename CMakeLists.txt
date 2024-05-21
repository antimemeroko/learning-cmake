cmake_minimum_required(VERSION 3.26...3.29)

project(learningCMake VERSION 0.1.0 
					  DESCRIPTION "My project"
					  HOMEPAGE_URL "https://github.com/antimemeroko/learning-cmake"
					  LANGUAGES CXX C Fortran)

# comment
if (WIN32)
  set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
endif()

add_subdirectory(src)
add_subdirectory(examples)
