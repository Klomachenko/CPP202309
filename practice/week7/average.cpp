#include <iostream>
using namespace std;

float Average(float value1, float value2 = 0)
{
    float result = (value1 + value2) / 2;
    return result;
}

int main()
{
    float a = 2, b = 3;
    // 1. 매개변수로 a, b 보냄
    float value = Average(a, b);
    cout << value << endl;

    // // 2. 매개변수 a 만 보냄
    // value = Average(a);
    // cout << value << endl;
}