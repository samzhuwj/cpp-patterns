// swap the contents of two containers
#include <algorithm>
#include <utility>
#include <vector>

int main()
{
  std::vector<int> v1 = { 1, 3, 5, 7 };
  std::vector<int> v2 = { 2, 4, 6, 8 };
  std::swap_ranges(std::begin(v1), std::end(v1), std::begin(v2));
  v1.swap(v2);
  using std::swap;
  swap(v1, v2);
}
