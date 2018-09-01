// count the number of occurrences of a particular value in a range of elements
#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
  std::vector<int> numbers = {1,2,3,5,8,3,11,14,3,17};
  int count = std::count(std::begin(numbers), std::end(numbers), 3)
}
