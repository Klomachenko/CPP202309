#include <iostream>
// 문자열 사용을 위한 헤더 추가
#include <string>
using namespace std;

int main()
{
	// 각 변수들에 string 선언 후 알맞은 문자열 할당
	string s1 = "Good";
	string s2 = "Morning";
	// s3에 s1과 공백 s2 그리고 ! 를 이어서 새로운 문자열을 할당
	string s3 = s1 + " " + s2 + "!";
	// s3를 출력, endl은 줄바꿈!
	cout << s3 << endl;
	return 0;
}