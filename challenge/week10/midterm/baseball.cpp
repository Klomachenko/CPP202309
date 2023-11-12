#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// 세 자리 숫자의 각 자릿수가 모두 다른지 확인하는 함수
bool areDigitsUnique(int num)
{
  string number = to_string(num);
  return (number[0] != number[1] && number[0] != number[2] && number[1] != number[2]);
}

// 추측한 숫자와 정답을 비교하여 힌트(아웃, 볼, 스트라이크)를 제공하는 함수
void provideHint(int answer, int guess, int &strike, int &ball)
{
  string answerStr = to_string(answer);
  string guessStr = to_string(guess);

  strike = 0;
  ball = 0;

  for (int i = 0; i < 3; ++i)
  {
    if (answerStr[i] == guessStr[i])
    {
      strike++;
    }
    else if (answerStr.find(guessStr[i]) != string::npos)
    {
      ball++;
    }
  }
}

int main()
{
  srand(static_cast<unsigned int>(time(0)));

  int randomNum;
  int turn = 0;

  // 중복되지 않는 세 자리 숫자 생성
  do
  {
    randomNum = rand() % 900 + 100;
  } while (!areDigitsUnique(randomNum));

  while (true)
  {
    turn++;

    cout << turn << "번째 시도입니다." << endl;

    int userNumber;
    int strike, ball;

    do
    {
      cout << "세 자리 숫자를 입력해주세요: ";
      cin >> userNumber;

      if (to_string(userNumber).length() != 3 || !areDigitsUnique(userNumber))
      {
        cout << "입력된 숫자가 3자리 숫자가 아니거나 중복된 숫자가 있습니다. 다시 입력하세요." << endl;
      }
      else
      {
        break;
      }
    } while (true);

    provideHint(randomNum, userNumber, strike, ball);

    cout << userNumber << "의 결과: " << strike << " 스트라이크, " << ball << " 볼 입니다." << endl;

    if (strike == 3)
    {
      cout << "정답을 맞췄습니다. 축하합니다." << endl;
      break;
    }
  }

  return 0;
}
