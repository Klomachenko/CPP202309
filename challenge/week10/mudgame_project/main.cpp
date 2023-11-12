#include <iostream>
#include <string>
#include "user.h"
using namespace std;

const int mapX = 5;
const int mapY = 5;

// 사용자 정의 함수
bool checkXY(int user_x, int mapX, int user_y, int mapY);
void displayMap(int map[][mapX], int user_x, int user_y, User &user);
bool checkGoal(int map[][mapX], int user_x, int user_y);

int main()
{
  int map[mapY][mapX] = {{0, 1, 2, 0, 4},
                         {1, 0, 0, 2, 0},
                         {0, 0, 0, 0, 0},
                         {0, 2, 3, 0, 0},
                         {3, 0, 0, 0, 2}};

  User my_user;
  my_user.hp = 20; // 사용자 체력

  int user_x = 0;
  int user_y = 0;

  while (my_user.GetHP() > 0)
  {
    string user_input = "";

    cout << "체력: " << my_user.GetHP() << endl;
    cout << "명령어를 입력하세요 (상,하,좌,우,지도,종료): ";
    cin >> user_input;

    if (user_input == "상")
    {
      // 사용자가 상 방향을 선택한 경우
      user_y -= 1;                                      // 사용자 위치 변경
      my_user.DecreaseHP(1);                            // 체력 감소
      bool inMap = checkXY(user_x, mapX, user_y, mapY); // 지도 범위 확인
      if (!inMap)
      {
        cout << "맵을 벗어났습니다. 다시 돌아갑니다." << endl;
        user_y += 1; // 원래 위치로 이동
      }
      else
      {
        displayMap(map, user_x, user_y, my_user); // 지도 표시
      }
    }
    // 다른 방향 이동과 지도 표시에 대한 로직은 이어서 작성해주세요...
    else if (user_input == "지도")
    {
      // 지도 표시하는 로직
      displayMap(map, user_x, user_y, my_user);
    }
    // 다른 사용자 입력에 대한 로직 추가...
    else
    {
      cout << "잘못된 입력입니다." << endl;
      continue;
    }

    // 목적지 도달 여부 확인
    bool finish = checkGoal(map, user_x, user_y);
    if (finish)
    {
      cout << "목적지에 도착했습니다! 축하합니다!" << endl;
      break; // 게임 종료
    }
  }

  if (my_user.GetHP() <= 0)
  {
    cout << "체력이 바닥났습니다. 실패했습니다!" << endl;
  }

  return 0;
}

void displayMap(int map[][mapX], int user_x, int user_y, User &user)
{
  for (int i = 0; i < mapY; i++)
  {
    for (int j = 0; j < mapX; j++)
    {
      if (i == user_y && j == user_x)
      {
        cout << " USER |"; // 사용자 위치 표시
      }
      else
      {
        int posState = map[i][j];
        switch (posState)
        {
        case 0:
          cout << "      |"; // 빈 공간 표시
          break;
        case 1:
          cout << "아이템|"; // 아이템 표시
          break;
        case 2:
          cout << "  적  |";  // 적 표시
          user.DecreaseHP(2); // 적을 만나면 체력 감소
          break;
        case 3:
          cout << " 포션 |"; // 포션 표시
          user.hp += 3;      // 포션을 만나면 체력 증가
          break;
        case 4:
          cout << "목적지|"; // 목적지 표시
          break;
        }
      }
    }
    cout << endl;
    cout << " ------------------- " << endl;
  }
}

bool checkXY(int user_x, int mapX, int user_y, int mapY)
{
  return (user_x >= 0 && user_x < mapX && user_y >= 0 && user_y < mapY);
}

bool checkGoal(int map[][mapX], int user_x, int user_y)
{
  return (map[user_y][user_x] == 4);
}
