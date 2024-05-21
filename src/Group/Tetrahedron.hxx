#ifndef GROUP_TETRAHEDRON
#define GROUP_TETRAHEDRON

namespace Group {

class Tetrahedron {
public:
  int value;

public:
  explicit Tetrahedron(int newValue = 0) : value{newValue} {};
};

} // namespace Group

#endif // GROUP_TETRAHEDRON
