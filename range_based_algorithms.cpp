// implement algorithms that can be applied to any generic range of elements
#include <iterator>
#include <utility>

template <typename ForwardRange>
void algorithm(ForwardRange& range)
{
  using std::begin;
  using std::end;
  using iterator = decltype(begin(range));
  iterator it_begin = begin(range);
  iterator it_end = end(range);
  // Now use it_begin and it_end to implement algorithm
}
