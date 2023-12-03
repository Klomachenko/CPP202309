#include <iostream>
using namespace std;
class Parent
{
public:
  virtual ~Parent() { cout << "Parent 소멸자" << endl; }
};
class Child : public Parent
{
public:
  ~Child() { cout << "Child 소멸자" << endl; }
};
int main()
{
  Parent *p = new Child(); // 상향 형변환
  delete p;
}