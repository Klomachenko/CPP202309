#include <iostream>

using namespace std;

int main()
{
	// 각 변수들에 정수값 할당
	int two = 2;
	int eight = 8;
	int sum1 = 2;
	int sum2 = 2;

	sum1 = sum1 + two;

	// 아래의 식은 해당 식과 같다 => sum2 = sum2 + eight (여기서 '='는 수학에서의 '='과 다르다 단지 '할당' 해줄 뿐)
	sum2 += eight;
	cout << "sum1 = " << sum1 << endl;
	cout << "sum2 = " << sum2 << endl;
}