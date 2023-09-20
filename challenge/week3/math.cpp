#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    // 정수 변수 선언
    int i;
    int ans;
    cout << "산수 문제를 자동으로 출제합니다. " << endl;

    while (true)
    {
        // 난수 생성
        int firstNum = rand() % 100;
        int secondNum = rand() % 100;
        int correct = firstNum + secondNum;
        cin >> ans;

        // 정답과 일치하는 경우 -> break 탈출
        if (ans == correct)
        {
            cout << firstNum << "+" << secondNum << "=" << correct << endl;
            cout << "맞았습니다!" << endl;
            break;
        }
        // 정답과 일치하지 않는 경우 -> 계속 반복
        else if (ans != correct)
        {
            cout << firstNum << "+" << secondNum << "=" << correct << endl;
            cout << "틀렸습니다!" << endl;
            break;
        }
    }
    return 0;
}