#include <iostream>

using namespace std;

int main()
{
	// 정수를 저장할 변수 'number'를 선언하고 0으로 초기화
	int number = 0;

	// cin을 사용하여 사용자로부터 값을 입력받을 수 있음
	cin >> number;

	// cout를 사용하여 화면에 메시지를 출력함, << 연산자는 타 프로그래밍 언어 + 처럼 동작하며 스트링과 변수의 값을 연결해줌
	cout << "입력한 숫자는" << number << "입니다." << endl;

	return 0;
}