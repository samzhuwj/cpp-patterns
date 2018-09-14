// generate a random integer according to a uniform distribution
#include <random>

int main()
{
  std::random_device random_device;
  std::mt19937 random_engine{random_device()};
  std::uniform_int_distribution<int> die_distribution{1, 6};
  int die_roll = die_distribution(random_engine);
}
