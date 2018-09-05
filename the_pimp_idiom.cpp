// remove compilation dependencies on internal class implementations and improve compile times
#include <memory>

class foo
{
public:
  foo();
  ~foo();
  foo(foo&&);
  foo& operator=(foo&&);

private:
  class impl;
  std::unique_ptr<impl> pimpl;
};

class foo::impl
{
public:
  void do_internal_work()
  {
    internal_data = 5;
  }

private:
  int internal_data = 0;
};

foo::foo() : pimpl{std::make_unique<impl>()}
{
  pimpl->do_internal_work();
}

foo::~foo() = default;
foo::foo(foo&&) = default;
foo& foo::operator=(foo&&) = default;
