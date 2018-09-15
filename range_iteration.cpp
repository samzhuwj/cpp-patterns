// Iterate over a range of elements without using iterators or indices
#include <vector>

int main()
{
  int arr[] = {1, 2, 3, 4, 5};

  for (int value : arr) {
    // Use value
  }
  
  std::vector<int> vec = {1, 2, 3, 4, 5};

  for (int& ref : vec) {
    // Modify ref
  }
}
