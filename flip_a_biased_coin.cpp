// generate a random boolean value according to a bernoulli distribution
#include <random>

int main()
{
  std::random_device random_device;
  std::mt19937 random_engine{random_device()};
  std::bernoulli_distribution coin_distribution{0.25};
  bool outcome = coin_distribution(random_engine);
}
