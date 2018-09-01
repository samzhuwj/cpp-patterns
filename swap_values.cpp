// Swap the values of two objects
#include <iostream>
#include <string>
#include <utility>

int main()
{
  std::string s1 = "Hello";
  std::string s2 = "World";
  std::swap(s1, s2);
  std::cout << s1 << " " << s2 << std::endl;
}
