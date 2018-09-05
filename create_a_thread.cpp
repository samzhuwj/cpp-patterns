// execute code on a separate thread
#include <thread>
#include <string>
#include <functional>

void func(std::string str, int& x);

void do_something();

int main()
{
  std::string str = "Test";
  int x = 5;
  std::thread t{func, str, std::ref(x)};
  do_something();
  t.join();
}
