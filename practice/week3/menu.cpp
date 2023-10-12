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

    // choice 를 매개변수로 하는 switch 조건문 실행
    switch (choice)
    {
    // 1을 선택한 경우
    case 1:
        cout << "파일 저장을 선택했습니다" << endl;
        break;
    // 2를 선택한 경우
    case 2:
        cout << "파일 닫기를 선택했습니다" << endl;
        break;
    // 3을 선택한 경우
    case 3:
        cout << "프로그램을 종료합니다" << endl;
        break;
    // 1, 2, 3이 아닌 다른 값을 입력한 경우
    default:
        cout << "잘못된 선택입니다" << endl;
        break;
    }

    return 0;
}