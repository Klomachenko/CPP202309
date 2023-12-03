#include <iostream>
using namespace std;

class Base
{
public:
  int x;

protected:
  int y;

private:
  int z;
};

class Derived : private Base
{
public:
  // Derived 클래스의 public 멤버 함수를 통해 x, y에 접근할 수 있도록 함
  int getX() { return x; }
  int getY() { return y; }
};

int main()
{
  Derived obj;
  cout << "Value of x in Derived: " << obj.getX() << endl;
  cout << "Value of y in Derived: " << obj.getY() << endl;

  return 0;
}
