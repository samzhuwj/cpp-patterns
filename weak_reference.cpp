// maintain a non-owning reference to a shared dynamically allocated object to break circular dependencies
#include <memory>

class bar;

class foo
{
public:
  foo(const std::shared_ptr<bar>& b) : forward_reference{b} {}

private:
  std::shared_ptr<bar> forward_reference;
};

class bar
{
public:
  void set_back_reference(const std::weak_ptr<foo>& f)
  {
    this->back_reference = f;
  }

  void do_something()
  {
    std::shared_ptr<foo> shared_back_reference = this->back_reference.lock();

    if (shared_back_reference) {
      // Use *shared_back_reference
    }
  }

private:
  std::weak_ptr<foo> back_reference;
};
