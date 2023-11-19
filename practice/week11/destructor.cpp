#include <string.h>

class MyString
{
private:
  char *s;
  int size;

public:
  MyString(char *c)
  {
    size = strlen(c) + 1;
    s = new char[size];
    strcpy(s, c);
  }
  ~MyString() { delete[] s; }
};

int main()
{
  MyString str("abcedfghijk");
}