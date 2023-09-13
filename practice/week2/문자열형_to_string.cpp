#include <iostream>
// 문자열 사용을 위한 헤더 추가
#include <string>
using namespace std;

int main()
{
	// s1에 string 선언 후 사과라는 문자열 할당
	string s1 = "사과";
	// s2는 string 이라 선언만 하고 할당 x
	string s2;

	// s2 에 s1 + 10 + 개 를 하여 사과 10개를 출력하고 싶음
	// s2 = s1 + " " + 10 + "개"; => 이렇게 작성했더니 오류가 발생
	// deduced conflicting types for parameter '_CharT' ('char' vs. 'int') 라는 에러가 발생
	// 에러의 의미 	char과 int 사이의 혼동된 데이터 형식을 가질 때 발생하는 문제라고 함
	// 그런데 난 string 이랑 섞었는데...? => 컴파일러가 타입을 추론할 때 충돌이나 모호성으로 인해 발생한 것

	// to_string 함수르 ㄹ이용하여 숫자를 문자열로 변환 후 결합하니 정상적으로 출력되는 걸 볼 수 있었음
	s2 = s1 + " " + to_string(10) + "개";
	cout << s2 << endl;

	return 0;
}