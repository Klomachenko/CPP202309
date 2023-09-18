#include <iostream>
using namespace std;

int main()
{
    // 정수 변수 선언
    int choice;

    // 사용자에게 메뉴 보여주기
    cout << "1. 파일 저장" << endl;
    cout << "2. 저장 없이 닫기" << endl;
    cout << "3. 종료" << endl;

    // 사용자로부터 값을 입력받고 choice 에 저장
    cin >> choice;

    if (choice == 1)
        // choice 가 1인 경우 출력
        cout << "파일 저장을 선택했습니다" << endl;
    else if (choice == 2)
        // choice 가 2인 경우 출력
        cout << "파일 닫기를 선택했습니다" << endl;
    else if (choice == 3)
        // choice 가 3인 경우 출력
        cout << "프로그램을 종료합니다" << endl;
    else
        // 나머지 경우 (choice가 1, 2, 3이 아닌 경우 출력)
        cout << "잘못된 선택입니다" << endl;

    return 0;
}