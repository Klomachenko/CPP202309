#include <iostream>
using namespace std;

// 함수 선언
bool isValid(int x, int y, int numCell);
bool checkWin(char board[][3], int numCell);
void displayBoard(char board[][3], int numCell);

int main()
{
  const int numCell = 3;
  char board[numCell][numCell]{};
  int x, y;
  char currentPlayer = 'X';
  bool gameWon = false;
  bool boardFull = false;

  // 보드 초기화
  for (x = 0; x < numCell; x++)
  {
    for (y = 0; y < numCell; y++)
    {
      board[x][y] = ' '; // 빈 칸으로 초기화
    }
  }

  while (!gameWon && !boardFull)
  {
    // 빙고가 완성되거나, 모든 칸이 차지 않는 이상 계속 게임 코드 반복
    // 1. 누구 차례인지 출력
    switch (numCell % 2)
    {
    case 0:
      cout << numCell % 2 + 1 << "번 유저(X)의 차례입니다 -> "; // 홀수번 user = X
      currentPlayer = 'X';
      break;
    case 1:
      cout << numCell % 2 + 1 << "번 유저(O)의 차례입니다 -> "; // 짝수번 user = O
      currentPlayer = 'O';
      break;
    }

    cout << "(x, y) 좌표를 입력하세요: ";
    cin >> x >> y;

    // 좌표 유효성 체크
    if (!isValid(x, y, numCell))
    {
      cout << x << ", " << y << ": 유효하지 않은 좌표입니다." << endl;
      continue;
    }

    // 좌표에 돌 놓기
    if (board[x][y] == ' ')
    {
      board[x][y] = currentPlayer;
    }
    else
    {
      cout << x << ", " << y << ": 이미 돌이 차있습니다." << endl;
      continue;
    }

    // 게임 상태 확인
    displayBoard(board, numCell);
    gameWon = checkWin(board, numCell);

    int totalFilled = 0;
    for (int i = 0; i < numCell; i++)
    {
      for (int j = 0; j < numCell; j++)
      {
        if (board[i][j] != ' ')
          totalFilled++;
      }
    }
    if (totalFilled == numCell * numCell)
      boardFull = true;

    currentPlayer = (currentPlayer == 'X') ? 'O' : ((currentPlayer == 'O') ? 'H' : 'X');
  }

  // 결과 출력
  if (gameWon)
  {
    cout << "빙고! " << currentPlayer << " 플레이어가 승리하였습니다." << endl;
  }
  else
  {
    cout << "무승부! 모든 칸이 찼습니다." << endl;
  }

  return 0;
}

// 좌표 유효성 검사 함수
bool isValid(int x, int y, int numCell)
{
  return (x >= 0 && x < numCell && y >= 0 && y < numCell);
}

// 빙고 확인 함수
bool checkWin(char board[][3], int numCell)
{
  // 가로, 세로 빙고 확인
  for (int i = 0; i < numCell; i++)
  {
    if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2])
    {
      return true;
    }
  }
  // 대각선 빙고 확인
  for (int i = 0; i < numCell; i++)
  {
    if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[1][i] == board[2][i])
    {
      return true;
    }
  }

  if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2])
  {
    return true;
  }

  if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0])
  {
    return true;
  }

  return false;
}

// 현재 보드 출력 함수
void displayBoard(char board[][3], int numCell)
{
  for (int i = 0; i < numCell; i++)
  {
    cout << "---|---|---" << endl;
    for (int j = 0; j < numCell; j++)
    {
      cout << board[i][j];
      if (j != numCell - 1)
      {
        cout << " |";
      }
    }
    cout << endl;
  }
  cout << "---|---|---" << endl;
}
