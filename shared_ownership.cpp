// share ownership of a dynamically allocated object with another unit of code
#include <memory>
#include <utility>

struct foo {};

void func(std::shared_ptr<foo> obj){}

int main()
{
  std::shared_ptr<foo> obj = std::make_shared<foo>();
  func(obj);
}
