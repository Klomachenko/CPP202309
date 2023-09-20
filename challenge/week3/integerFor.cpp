#include <iostream>
using namespace std;

int main()
{
    // 사용자 입력값을 정수변수로 선언
    int userInput;

    cout << "정수를 10번 입력하세요 (0을 입력하면 종료):";
    int i;

    // 조건문 10번 반복
    for (i = 0; i < 10; i++)
    {
        // 사용자로부터 값을 받아 userInput 에 저장 이때 입력값은 정수여야 한다
        cin >> userInput;
        // 사용자 입력값이 0 이면 즉시 종료
        if (userInput == 0)
        {
            break;
        }

        cout << "입력값: " << userInput << " 횟수 :" << i << endl;
        // 사용자가 입력을 10번 하면 종료
        if (i == 10)
        {
            break;
        }
    }

    cout << "종료 되었습니다.";

    return 0;
}