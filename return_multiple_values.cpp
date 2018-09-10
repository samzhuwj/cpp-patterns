// return multiple values of different types from a function
#include <tuple>
std::tuple<int, bool, float> foo()
{
  return {128, true, 1.5f};
}

int main()
{
  std::tuple<int, bool, float> result = foo();
  int value = std::get<0>(result);
  auto [value1, value2, value3] = foo();
}
