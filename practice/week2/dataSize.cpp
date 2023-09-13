#include <iostream>

using namespace std;

int main()
{
	// sizeof 함수는 크기를 나타내줌
	cout << "char 크기 : " << sizeof('p') << endl;
	cout << "int 크기 : " << sizeof(10) << endl;
	cout << "double 크기 : " << sizeof(double) << endl;
	cout << "bool 크기 : " << sizeof(true) << endl;
	// 실제로 float이 double 보다 크기가 작은 것을 볼 수 있음
	cout << "float 크기 : " << sizeof(float) << endl;

	return 0;
}