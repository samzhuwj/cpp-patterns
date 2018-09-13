// choose a random element from a container
#include <random>
#include <vector>

int main()
{
  std::vector<int> v = {10, 15, 20, 25, 30};
  std::random_device random_device;
  std::mt19937 engine{random_device()};
  std::uniform_int_distribution<int> dist(0, v.size()-1);
  int random_element = v[dist(engine)];
}
