// conditionally instantiate a function template depending on the template arguments
#include <type_traits>
#include <limits>
#include <cmath>

template <typename T>
typename std::enable_if<std::is_integral<T>::value, bool>::type equal(T lhs, T rhs)
{
  return lhs == rhs;
}

template <typename T>
typename std::enable_if<std::is_floating_point<T>::value, bool>::type equal(T lhs, T rhs)
{
  return std::abs(lhs - rhs) < 0.0001;
}
