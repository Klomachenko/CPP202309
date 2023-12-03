#include "user.h"

User::User() : hp(10) {}

void User::DecreaseHP(int dec_ht)
{
  hp -= dec_ht;
  if (hp < 0)
  {
    hp = 0;
  }
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
  return hp > 0;
}

void User::doAttack()
{
  // 기본 공격 동작 (사용자 클래스에서는 아무 동작이 없음)
}
