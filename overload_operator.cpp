// write your class type objects to an output stream <<
#include <iostream>

class foo
{
public:
  friend std::ostream& operator<<(std::ostream& stream, foo const& f);

private:
  int x = 10;
};

std::ostream& operator<<(std::ostream& stream, foo const& f)
{
  return stream << "A foo with x = " << f.x;
}
