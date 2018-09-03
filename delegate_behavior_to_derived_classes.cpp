// delegate behavior to derived classes without incurring the cost of run-time polymorphism
template<typename derived>
class base
{
public:
  void do_something()
  {
    // ...
    static_cast<derived*>(this)->do_something_impl();
    // ...
  }
private:
  void do_something_impl()
  {
    // Default implementation
  }
};

class foo : public base<foo>
{
public:
  void do_something_impl()
  {
    // Derived implementation
  }
};

class bar : public base<bar>
{
};

template<typename derived>
void use(base<derived>& b)
{
  b.do_something();
}
