// process the contents of an input stream line-by-line
#include <sstream>
#include <string>

int main()
{
  std::istringstream stream{"This stream\n"
                            "contains many\n"
                            "lines.\n"};
  std::string line;
  while (std::getline(stream, line)) {
    // Process line
  }
}
