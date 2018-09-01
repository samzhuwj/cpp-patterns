// copy elements from a range to another range or container
#include <vector>
#include <algorithm>
#include <iterator>

std::vector<int> target2(5);
std::vector<int> target3;

template <typename RangeOfInts>
void foo(RangeOfInts source)
{
  std::vector<int> target1 {std::begin(source), std::end(source)};
  std::copy(std::begin(source), std::end(source), std::begin(target2));
  std::copy(std::begin(source), std::end(source), std::back_inserter(target3));
}
