// use promises to communicate values between threads
#include <future>
#include <thread>

void func(std::promise<int> result_promise) noexcept
{
  result_promise.set_value(42);
}

int main()
{
  std::promise<int> result_promise;
  std::future<int> result_future = result_promise.get_future();
  std::thread t{func, std::move(result_promise)};
  int result = result_future.get();
  t.join();
}
