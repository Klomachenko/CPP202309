#include <iostream>

using namespace std;

// C++ 11 이상의 버전에서 'auto'는 컴파일러가 변수의 데이터 형식을 자동으로 추론함
auto add(int x, int y)
{
	return x + y;
}

// 즉 명시하지 않아도 5와 6을 int로 추론됨
// auto를 사용하면 코드를 간결하게 유지하고 복잡하게 명시적으로 데이터 형식을 작성하지 않아도 됨
// 하지만 코드의 가독성을 해치게 될 수도 있음
int main()
{
	auto sum = add(5, 6);
	cout << sum;
	return 0;
}