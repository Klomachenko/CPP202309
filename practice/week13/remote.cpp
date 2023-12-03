#include <iostream>
using namespace std;

class RemoteControl
{
public:
  virtual void TurnON() = 0;
  virtual void TurnOFF() = 0;
};

class Television : public RemoteControl
{
public:
  void TurnON() override
  {
    std::cout << "어이 티비켜라" << std::endl;
  }

  void TurnOFF() override
  {
    std::cout << "어이 티비꺼라" << std::endl;
  }
};

class Refrigerator : public RemoteControl
{
public:
  void TurnON() override
  {
    std::cout << "냉장고좀 열어봐라" << std::endl;
  }

  void TurnOFF() override
  {
    std::cout << "냉장고 닫어라 전기세 나온다" << std::endl;
  }
};

int main()
{
  RemoteControl *remoteTV = new Television();
  remoteTV->TurnON();
  remoteTV->TurnOFF();
  delete remoteTV;

  RemoteControl *remoteRefrigerator = new Refrigerator();
  remoteRefrigerator->TurnON();
  remoteRefrigerator->TurnOFF();
  delete remoteRefrigerator;

  return 0;
}
