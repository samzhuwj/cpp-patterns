// conditionally instantiate a class template depending on the template arguments
#include <type_traits>

template <typename T, typename Enable = void>
class foo;

template <typename T>
class foo<T, typename std::enable_if<std::is_integral<T>::value>::type> {};

template <typename T>
class foo<T, typename std::enable_if<std::is_floating_point<T>::value>::type> {};
