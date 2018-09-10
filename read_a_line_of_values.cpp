// read a sequence of delimited values from a single line of an input stream into a standard container
#include <vector>
#include <sstream>
#include <iterator>

int main()
{
  std::istringstream stream{"4 36 72 8"};
  std::vector<int> values;
  std::copy(std::istream_iterator<int>{stream}, std::istream_iterator<int>{}, std::back_inserter(values));
}
