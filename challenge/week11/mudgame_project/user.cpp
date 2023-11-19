#include "user.h"

User::User()
{
  hp = 20; // 생성자에서 초기화
}

void User::DecreaseHP(int dec_ht)
{
  hp -= dec_ht;
}

void User::IncreaseHP(int inc_hp)
{
  hp += inc_hp;
}

int User::GetHP()
{
  return hp;
}

bool User::CheckUser()
{
  return (hp > 0); // HP가 0보다 크면 true, 아니면 false 반환
}
