#include <iostream>
using namespace std;

int main()
{
    int a = 2, b = 3;
    max(a, b);

    return 0;
}

int max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}