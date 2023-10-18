#include <iostream>
using namespace std;

void swap(int &x, int &y)
{
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
}

int main()
{
    int a = 100, b = 200;

    cout << "a=" << a << " b=" << b << endl;

    // 두 변수 내 값 변경
    swap(a, b);

    cout << "a=" << a << " b=" << b << endl;
    return 0;
}