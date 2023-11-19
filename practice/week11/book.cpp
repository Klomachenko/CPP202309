#include <iostream>
#include <string>
using namespace std;

class Book
{
  string title;
  int price;

public:
  Book(string name, int price)
  {
    title = name;
    this->price = price;
  }
  void Print()
  {
    cout << "제목:" << title << ", 가격:" << price << endl;
  }
};

int main(void)
{
  Book books[2] = {
      Book("어서와 C++", 25000),
      Book("어서와 C", 22000)};
  cout << "소장하고 있는 책 정보" << endl;
  cout << "======================" << endl;
  for (Book &b : books)
    b.Print();
  cout << "======================" << endl;

  return 0;
}
