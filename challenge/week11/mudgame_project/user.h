#ifndef USER_H
#define USER_H

class User
{
private:
  int hp; // HP 변수

public:
  User();                      // 생성자
  void DecreaseHP(int dec_ht); // HP 감소 함수
  void IncreaseHP(int inc_hp); // HP 증가 함수
  int GetHP();                 // HP 반환 함수
  bool CheckUser();            // HP가 0인지 체크하는 함수
};

#endif
