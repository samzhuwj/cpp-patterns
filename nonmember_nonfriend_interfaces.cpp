// reduce dependencies on internal class details and improve encapsulation
namespace ns
{
  class foo
  {
  public:
    void member()
    {
      // Uses private data
    }
  private:
    // Private data
  };

  void non_member(foo obj)
  {
    obj.member();
  }
}

int main()
{
  ns::foo obj;
  non_member(obj);
}
