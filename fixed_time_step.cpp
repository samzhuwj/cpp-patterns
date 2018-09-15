// block the execution of a thread until a fixed point in time
#include <chrono>
#include <thread>

using namespace std::literals::chrono_literals;

void some_complex_work();

int main()
{
  using clock = std::chrono::steady_clock;
  clock::time_point next_time_point = clock::now() + 5s;
  some_complex_work();
  std::this_thread::sleep_until(next_time_point);
}
