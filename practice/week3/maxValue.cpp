#include <iostream>
using namespace std;

int main()
{
    // 정수 변수 선언
    int a, b, c, largest;

    cout << "3개의 정수를 입력하시오 : ";
    // 사용자로부터 3개의 정수 입력
    cin >> a >> b >> c;

    // 조건문 a가 b보다 크고, a가 c 보다 큰 경우 (a가 가장 큰 경우)
    if (a > b && a > c)
        // a 가 최댓값
        largest = a;
    // 조건문 a가 b 보다 작고, b가 c 보다 큰 경우 (b가 가장 큰 경우)
    else if (b > a && b > c)
        // b 가 최댓값
        largest = b;
    // 나머지 경우 (c 가 가장 큰 경우))
    else
        // c 가 최댓값
        largest = c;

    cout << "가장 큰 정수는" << largest << endl;
    return 0;
}