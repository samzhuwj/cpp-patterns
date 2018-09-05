// high-level asynchronous execution of tasks
#include <future>

int func()
{
  int some_value = 0;
  // Do work...
  return some_value;
}

int main()
{
  std::future<int> result_future = std::async(func);
  // Do something...
  int result = result_future.get();
}
