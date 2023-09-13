#include <iostream>
using namespace std;

int main()
{
	// 각 변수들에 정수값 할당
	int one = 1;
	int two = 2;
	int three = 3;
	int four = 4;

	// 사칙연산 수행
	cout << "1 + 3 = " << one + three << endl;
	cout << "4 - 2 = " << four - two << endl;
	cout << "2 * 3 = " << two * three << endl;
	cout << "4 / 2 = " << four / two << endl;

	// 우리가 아는 수학적 연산 순서를 따라가는 것을 볼 수 있음
	cout << "2 + 3 * 4 = " << two + three * four << endl;
	cout << "2 + 3 * 4 = " << two + three * four << endl;
	cout << "1 + 4 / 2 = " << one + four / two << endl;

	return 0;
}