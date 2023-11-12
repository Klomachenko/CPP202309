#include "user.h"

void User::DecreaseHP(int dec_ht)
{
  hp -= dec_ht;
}

int User::GetHP()
{
  return hp;
}
