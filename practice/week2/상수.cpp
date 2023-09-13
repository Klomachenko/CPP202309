#include <iostream>
// #define은 C++에서 사용하는 전처리기 지시어
// #define을 이용하여 상수나 매크로를 정의할 수 있음! => 컴파일러가 소스 코드를 처리하기 전에 미리 값을 지정한 것
// 상수를 중복해서 사용하거나 수정시에 코드 전체를 변경하지 않고, 한 곳에서 수정할 수 있음, 또한 명시적임
#define PI 3.14159265359

using namespace std;

int main()
{
	// 정수 변수에 정수 할당
	int income = 1000;
	// 상수(변하지 않는 값)이라 선언 후 double 변수에 알맞은 실수 할당
	const double TAX_RATE = 0.25;
	// 사칙연산 실행
	income = income - TAX_RATE * income;

	double x = 100;
	x = x * PI;

	cout << x << endl;
	// income 출력이 빠진 것 같아 임의로 출력해 보았습니다.
	cout << income << endl;
	return 0;
}