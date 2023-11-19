#include <iostream>
using namespace std;

int main()
{
  // 화씨 온도와 섭씨 온도를 계산하는 프로그램

  // 사용자로부터 화씨 온도를 입력받음
  double fahrenheit;
  cout << "화씨온도: ";
  cin >> fahrenheit;

  // 화씨를 섭씨로 변환하는 공식을 이용하여 섭씨 온도 계산
  double celsius = (5.0 / 9.0) * (fahrenheit - 32);

  // 계산된 섭씨 온도를 출력
  cout << "섭씨온도 : " << celsius << endl;

  return 0;
}
