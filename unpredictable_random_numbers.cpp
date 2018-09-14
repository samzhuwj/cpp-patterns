// seed a random number engine with greater unpredictability
#include <random>

int main() {
  std::random_device r;
  std::seed_seq seed_seq{r(), r(), r(), r(), r(), r()};
  std::mt19937 engine{seed_seq};
}
