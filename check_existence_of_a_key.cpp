// check if a particular key is in an associative container
#include <map>
#include <string>

int main()
{
  std::map<std::string, int> m = {{"a", 1}, {"b", 2}, {"c", 3}};
  
  if (m.count("b"))
  {
    // We know "b" is in m
  }
}
