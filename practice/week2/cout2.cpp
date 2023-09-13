#include <iostream>
// 문자열 사용을 위한 헤더 추가
#include <string>

using namespace std;

int main()
{
	// 문자 character 를 저장하는데 사용 단 '문자 하나' 를 저장하며 작은따옴표를 사용함
	char character = 'C';
	// 정수를 저정하는데 사용
	int integer = 100;
	// 부동소수점 숫자를 저장하는데 사용
	// 사실 float 이라는 정수도 있으나 float은 4바이트, double은 8바이트의 메모리를 사용하여 더 넓은 범위의 실수 값을 저장할 수 있음
	double precision = 3.14159;
	// 논리값을 저장하는 데 사용 true, false 두 개로 나뉘며, 주로 조건문에서 사용함
	bool is_true = true;
	// 문자열 string을 저장하는 데 사용되는 데이터 형식
	string word = "Hello World";

	cout << "char : " << character << endl;
	cout << "int : " << integer << endl;
	cout << "double : " << precision << endl;
	cout << "bool : " << is_true << endl;
	cout << "string : " << word << endl;

	return 0;
}