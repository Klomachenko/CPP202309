#ifndef USER_H
#define USER_H

class User
{
private:
  int hp;

public:
  User();
  void DecreaseHP(int dec_ht);
  void IncreaseHP(int inc_hp);
  int GetHP();
  bool CheckUser();
  virtual void doAttack(); // 가상 함수로 공격 기능 추가
};

#endif
