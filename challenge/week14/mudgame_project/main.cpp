#include <iostream>
#include <fstream>
#include <string>
#include "user.h"
#include "user.cpp"
using namespace std;

const int mapX = 5;
const int mapY = 5;

// 사용자 정의 함수
bool checkXY(int user_x, int mapX, int user_y, int mapY);
void displayMap(int map[][mapX], int user_x, int user_y, User &user);
bool checkGoal(int map[][mapX], int user_x, int user_y);
void loadMapFromFile(int map[][mapX], const string &fileName);

// 매지션 클래스
class Magician : public User
{
public:
  void doAttack() override
  {
    cout << "마법 사용" << endl;
  }
};

// 워리어 클래스
class Warrior : public User
{
public:
  void doAttack() override
  {
    cout << "베기 사용" << endl;
  }
};

int main()
{
  int map[mapY][mapX];
  loadMapFromFile(map, "map.txt");

  // 두 플레이어 생성
  Magician magician;
  Warrior warrior;

  User *players[] = {&magician, &warrior};
  const int numPlayers = sizeof(players) / sizeof(players[0]);

  int currentPlayerIndex = 0;

  int user_x = 0;
  int user_y = 0;

  while (players[0]->CheckUser() && players[1]->CheckUser())
  {
    User *currentPlayer = players[currentPlayerIndex];

    cout << "현재 플레이어: ";
    if (currentPlayer == &magician)
      cout << "마법사" << endl;
    else
      cout << "전사" << endl;

    string user_input = "";

    cout << "체력: " << currentPlayer->GetHP() << endl;
    cout << "명령어를 입력하세요 (상,하,좌,우,지도,물약,종료,공격): ";
    cin >> user_input;

    if (user_input == "상")
    {
      // 사용자가 상 방향을 선택한 경우
      user_y -= 1;                                      // 사용자 위치 변경
      currentPlayer->DecreaseHP(1);                     // 체력 감소
      bool inMap = checkXY(user_x, mapX, user_y, mapY); // 지도 범위 확인
      if (!inMap)
      {
        cout << "맵을 벗어났습니다. 다시 돌아갑니다." << endl;
        user_y += 1; // 원래 위치로 이동
      }
      else
      {
        displayMap(map, user_x, user_y, *currentPlayer); // 지도 표시
      }
    }
    else if (user_input == "공격")
    {
      // 공격 로직
      currentPlayer->doAttack();
    }
    // 다른 방향 이동과 지도 표시에 대한 로직
    else if (user_input == "지도")
    {
      // 지도 표시하는 로직
      displayMap(map, user_x, user_y, *currentPlayer);
    }
    // 다른 사용자 입력에 대한 로직 추가...
    else if (user_input == "종료")
    {
      break;
    }
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
    currentPlayerIndex = (currentPlayerIndex + 1) % numPlayers;
  }

  if (!players[0]->CheckUser() && !players[1]->CheckUser())
  {
    cout << "양 플레이어 모두 체력이 바닥났습니다. 실패했습니다!" << endl;
  }
  else if (!players[0]->CheckUser())
  {
    cout << "마법사가 체력이 바닥났습니다. 전사 승리!" << endl;
  }
  else
  {
    cout << "전사가 체력이 바닥났습니다. 마법사 승리!" << endl;
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
          cout << " 포션 |";  // 포션 표시
          user.IncreaseHP(3); // 포션을 만나면 체력 증가
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

void loadMapFromFile(int map[][mapX], const string &fileName)
{
  // 파일 스트림을 열고, 열기에 실패하면 오류 메시지를 출력하고 프로그램을 종료합니다.
  ifstream file(fileName);
  if (!file.is_open())
  {
    cerr << "오류: 파일 " << fileName << "을(를) 열 수 없습니다." << endl;
    exit(EXIT_FAILURE);
  }

  // 2차원 배열에 맵 데이터를 읽어옵니다.
  for (int i = 0; i < mapY; ++i)
  {
    for (int j = 0; j < mapX; ++j)
    {
      // 파일에서 데이터를 읽지 못하면 오류 메시지를 출력하고 프로그램을 종료합니다.
      if (!(file >> map[i][j]))
      {
        cerr << "오류: 파일 " << fileName << "에서 데이터를 읽을 수 없습니다." << endl;
        file.close();
        exit(EXIT_FAILURE);
      }

      // 읽은 데이터가 허용된 범위를 벗어나면 오류 메시지를 출력하고 프로그램을 종료합니다.
      if (map[i][j] < 0 || map[i][j] > 4)
      {
        cerr << "오류: 파일 " << fileName << "에 잘못된 지도 데이터가 있습니다." << endl;
        file.close();
        exit(EXIT_FAILURE);
      }
    }
  }

  // 파일 스트림을 닫습니다.
  file.close();
}
