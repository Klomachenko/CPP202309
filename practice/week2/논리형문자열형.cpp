#include <iostream>
#include <string>
using namespace std;

int main()
{
	// 각 변수들에 string 선언 후 알맞은 문자열 할당
	string s1 = "Good";
	string s2 = "Bad";
	// 불리언 형 변수인 b는 s1과 s2가 같으면 true를 출력, 다르면 flase를 출력해야 함
	// 하지만 예상과 다르게 0과 1이 출력됨
	// C++ 에서는 true 와 false 값을 출력할 때 각각 '1'과 '0'으로 출력함

	// 아래는 s1과 s2가 다르므로 false 인 0 출력
	bool b = (s1 == s2);
	cout << b << endl;

	s2 = "Good";
	// s2가 바뀌어 s1과 s2가 같으므로 true 인 1 출력
	b = (s1 == s2);
	cout << b << endl;

	return 0;
}