#include <iostream>
using namespace std;

class Person
{
  string name;

protected:
  string address;
};
class Student : Person
{
public:
  void setAddress(string add)
  {
    address = add;
  }
  string getAddress()
  {
    return address;
  }
  // void setName(string name){ this->name = name; } // 에러
};
int main()
{
  Student obj;
  // obj.setName(“미수“) ; // 에러
  obj.setAddress("서울시 종로구 1번지");
  cout << obj.getAddress() << endl;
  return 0;
}