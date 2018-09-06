// use the erase-remove idiom to remove elements from a container
#include <vector>
#include <algorithm>

int main()
{
  std::vector<int> v = {1, 2, 3, 4, 2, 5, 2, 6};
  v.erase(std::remove(std::begin(v), std::end(v), 2), std::end(v));
  v.erase(std::remove_if(std::begin(v), std::end(v), [](int i) {return i%2==0;}), std::end(v));
}
