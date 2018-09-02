// sort elements in a range into a given order
#include <array>
#include <algorithm>
#include <iterator>
#include <functional>

int main()
{
  std::array<int, 5> arr = {3, 4, 1, 5, 2};
  std::sort(std::begin(arr), std::end(arr));
  std::sort(std::begin(arr), std::end(arr), std::greater<int>{});
}
