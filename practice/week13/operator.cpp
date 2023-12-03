#include <iostream>
using namespace std;

class Rectangle
{
  int width, height;

public:
  Rectangle(int width = 0, int height = 0)
  {
    this->width = width;
    this->height = height;
  }

  void Show();
  friend Rectangle operator=(Rectangle rec1, Rectangle rec2);
}

Rectangle
operator-(Rectangle rec1, Rectangle rec2)
{
  Rectangle rect;
  rect.width = rec1.width - rec2.width;
  rect.height = rec1.height - rec2.height;
  return rect;
};

void Rectangle::Show()
{
  cout << "width : " << width;
  cout << ","
       << "height : " << height << endl;
}

int main()
{
  Rectangle a(5, 8), b(1, 3), c;
  c = a - b;
  a.Show();
  b.Show();
  c.Show();
  return 0;
}
