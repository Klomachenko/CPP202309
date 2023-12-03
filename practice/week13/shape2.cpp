#include <iostream>
using namespace std;

class Shape
{
  int x, y;

public:
  Shape() { cout << "Shape 생성자() " << endl; }
  ~Shape() { cout << "Shape 소멸자() " << endl; }
};
class Rectangle : public Shape
{
  int width, height;

public:
  Rectangle() { cout << "Rectangle 생성자()" << endl; }
  ~Rectangle() { cout << "Rectangle 소멸자()" << endl; }
};

int main()
{
  Rectangle r;
  return 0;
}