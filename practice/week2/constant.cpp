#include <iostream>

using namespace std;

int main()
{
	// 상수 선언
	// 상수는 변경할 수 없음
	// const 뒤에 int를 붙이는 이유 : 이 선언이 "정수형 상수"임을 명시하는 것임
	const int GREATE_VICTORY_SALSU = 612;
	const int GREATE_VICTORY_GWIJU = 1019;

	cout << "고구려 살수대첩 연도 : " << GREATE_VICTORY_SALSU << "년" << endl;
	cout << "고려 귀주대첩 연도 : " << GREATE_VICTORY_GWIJU << "년" << endl;
	return 0;
}