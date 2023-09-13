#include <iostream>

using namespace std;

int main()
{
	// 각 변수들에 정수값 할당
	int x = 1;
	int y = -1;
	int z = -2;

	// 음수 연산 또한 정상적으로 나타나는 걸 확인할 수 있음
	cout << "1 + (-1) = " << x + y << endl;
	cout << "-1 + -2 = " << y + z << endl;

	return 0;
}