#include <iostream>
using namespace std;

// 섭씨를 화씨로 변환하는 함수
double celsiusToFahrenheit(double celsius)
{
  return (celsius * 9 / 5) + 32;
}

int main()
{
  double celsius;

  // 사용자로부터 섭씨 온도 입력 받기
  cout << "섭씨 온도를 입력하세요: ";
  cin >> celsius;

  // 섭씨를 화씨로 변환하여 출력
  double fahrenheit = celsiusToFahrenheit(celsius);
  cout << "화씨 온도: " << fahrenheit << "도" << endl;

  return 0;
}
