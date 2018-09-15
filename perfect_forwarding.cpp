// forward arguments of one function to another as though the wrapped function had been called directly
#include <utility>

template<typename T, typename U>
std::pair<T, U> make_pair_wrapper(T&& t, U&& u)
{
  return std::make_pair(std::forward<T>(t), std::forward<U>(u));
}
