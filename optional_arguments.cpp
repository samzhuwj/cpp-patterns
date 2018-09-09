// allow argument values to be omitted when calling a function
#include <experimental/optional>
using std::experimental::optional;
using std::experimental::nullopt;

void foo(int i, optional<double> f, optional<bool> b){}

int main()
{
  foo(5, 1.0, true);
  foo(5, nullopt, true);
  foo(5, 1.0, nullopt);
  foo(5, nullopt, nullopt);
}
