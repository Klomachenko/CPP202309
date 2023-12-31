#include <iostream>

using namespace std;

int main()
{
	// 각 변수들에 정수값 할당
	int x = 1;

	// 증감 연산자 확인 가능
	// 증감연산자는 붙어있는 위치가 중요함
	cout << "x = " << x++ << endl; // 1 출력 ++가 뒤에 붙어있어 이후에 x는 2임 (출력값 : 1)
	cout << "x = " << x++ << endl; // 2인 x를 받아 ++가 뒤에 붙어있어 이후의 x는 3임 (출력값 : 2)
	cout << "x = " << ++x << endl; // 3인 상태의 x를 받고, ++가 앞에 붙어있어 실행된 상태로 4가 출력되는걸 볼 수 있음 (출력값 : 4)
	cout << "x = " << x-- << endl; // 4인 상태의 x를 받고, --가 뒤에 붙어있어 이후의 x는 3임 (출력값 : 4)
	cout << "x = " << x-- << endl; // 3인 상태의 x를 받고, --가 뒤에 붙어있어 이후의 x는 2임 (출력값 : 3)
	cout << "x = " << --x << endl; // 2인 상태의 x를 받고, --가 앞에 붙어있어 실행된 상태로 1이 출력되는 걸 볼 수 있음 (출력값 : 1)

	return 0;
}