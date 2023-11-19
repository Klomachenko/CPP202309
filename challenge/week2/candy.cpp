#include <iostream>
using namespace std;

int main()
{
  // 사용자의 현재 가지고 있는 돈과 캔디의 가격을 입력받음
  int money;
  int candy_price;

  cout << "현재 가지고 있는 돈: ";
  cin >> money;
  cout << "캔디의 가격 : ";
  cin >> candy_price;

  // 최대로 살 수 있는 캔디의 개수 계산
  int n_candies = money / candy_price;
  cout << "최대로 살 수 있는 캔디의 개수=" << n_candies << endl;

  // 캔디를 구입한 후 남은 돈 계산
  int change = money % candy_price;
  cout << "캔디 구입 후 남은 돈 =" << change << endl;

  return 0;
}
