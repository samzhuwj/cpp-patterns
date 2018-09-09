// pass fixed-size arrays to and from functions
#include <array>
#include <experimental/dynarray>

void compile_time(std::array<int, 3> arr){}

void run_time(std::experimental::dynarray<int> arr){}

int main()
{
  std::array<int, 3> arr = {4, 8, 15};
  compile_time(arr);
  compile_time({16, 23, 42});
  std::experimental::dynarray<int> dynarr = {1, 2, 3};
  run_time(dynarr);
  run_time({1, 2, 3, 4, 5});
}
