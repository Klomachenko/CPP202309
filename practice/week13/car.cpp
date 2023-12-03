#include <iostream>
#include <string>
using namespace std;

class Car
{
  int speed;

public:
  void setSpeed(int s) { speed = s; }
  int getSpeed() { return speed; }
};

class SportsCar : public Car
{
  bool turbo;

public:
  void setTurbo(bool newValue) { turbo = newValue; }
  bool getTurbo() { return turbo; } // 수정: 중괄호 대신 괄호 사용
};

int main()
{
  SportsCar c; // 수정: 클래스명 오타 수정

  c.setSpeed(60);
  c.setTurbo(true);
  c.setSpeed(100);
  c.setTurbo(false);

  cout << c.getSpeed() << endl;
  cout << c.getTurbo() << endl;

  return 0;
}
