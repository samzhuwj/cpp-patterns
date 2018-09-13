// align data in columns when writing to an output stream
#include <iostream>
#include <iomanip>

int main()
{
  std::cout << std::left << std::setw(12) << "John Smith"
            << std::right << std::setw(3) << 23
            << '\n';
  std::cout << std::left << std::setw(12) << "Sam Brown"
            << std::right << std::setw(3) << 8
            << '\n';
}
