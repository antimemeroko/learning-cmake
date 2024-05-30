#include <iostream>

#include "Group/Tetrahedron.hxx"
#include "C/function_1.h"
#include "Fortran/functions.h"

int main(int argc, char const *argv[]) {
  Group::Tetrahedron t;

  std::cout << "Hello world! " << successor(t.value) << predecessor(t.value) << std::endl;

  return 0;
}
