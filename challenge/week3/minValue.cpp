#include <iostream>
using namespace std;

int main()
{
    // 정수 변수 선언
    int a, b, c, smallest;

    cout << "3개의 정수를 입력하시오 : ";
    // 사용자로부터 3개의 정수 입력
    cin >> a >> b >> c;

    // 조건문 a가 b보다 작고, a가 c 보다 작은 경우 (a가 가장 작은 경우)
    if (a < b && a < c)
        // a 가 최솟값
        smallest = a;
    // 조건문 a가 b 보다 작고, b가 c 보다 작은 경우 (b가 가장 작은 경우)
    else if (b < a && b < c)
        // b 가 최솟값
        smallest = b;
    // 나머지 경우 (c 가 가장 작은 경우))
    else
        // c 가 최솟값
        smallest = c;

    cout << "가장 작은 정수는" << smallest << endl;
    return 0;
}