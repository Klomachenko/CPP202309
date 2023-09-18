#include <iostream>
using namespace std;

int main()
{
    // 정수 변수 선언
    int number;
    cout << "숫자를 입력하시오:";
    // 사용자로부터 값을 입력받고 number에 저장
    cin >> number;

    if (number == 0)
        // number 가 0인 경우 출력
        cout << "zero\n";
    else if (number == 1)
        // number 가 1인 경우 출력
        cout << "one\n";
    else
        // number 가 0, 1 이 아닌 경우 출력
        cout << "many\n";
    return 0;
}