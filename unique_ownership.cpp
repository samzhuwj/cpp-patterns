// unique ownership
#include <memory>
#include <utility>

struct foo {};

void func(std::unique_ptr<foo> obj){}

int main()
{
  std::unique_ptr<foo> obj = std::make_unique<foo>();
  func(std::move(obj));
}
