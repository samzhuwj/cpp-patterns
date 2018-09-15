// measure the execution time of a unit of code
#include <chrono>

int main()
{
  using clock = std::chrono::steady_clock;
  clock::time_point start = clock::now();
  // A long task...
  clock::time_point end = clock::now();
  clock::duration execution_time = end - start;
}
