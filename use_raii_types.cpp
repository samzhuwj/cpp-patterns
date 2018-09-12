// avoid manual memory management to improve safety and reduce bugs and memory leaks
#include <map>
#include <memory>
#include <string>
#include <vector>

int main()
{
  std::vector<int> vec = {1, 2, 3, 4, 5};
  std::map<std::string, int> map = {{"Foo", 10}, {"Bar", 20}};
  std::string str = "Some text";
  std::unique_ptr<int> ptr1 = std::make_unique<int>(8);
  std::shared_ptr<int> ptr2 = std::make_shared<int>(16);
}
