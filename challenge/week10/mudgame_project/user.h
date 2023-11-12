#ifndef USER_H
#define USER_H

class User
{
public:
  int hp; // HP 변수

  void DecreaseHP(int dec_ht); // HP 감소 함수
  int GetHP();                 // HP 반환 함수
};

#endif
