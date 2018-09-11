// ensure that multiple stream reads are successful before using the extracted values
#include <sstream>
#include <string>

int main()
{
  std::istringstream stream{"Chief Executive Officer\n" "John Smith\n" "32"};
  std::string position;
  std::string first_name;
  std::string family_name;
  int age;
  if (std::getline(stream, position) && stream>>first_name>>family_name>>age)
  {
    // Use values
  }
}
