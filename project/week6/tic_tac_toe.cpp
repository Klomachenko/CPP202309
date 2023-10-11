#include <iostream>
using namespace std;

int main() {
  const int numCell = 3;
  char board[numCell][numCell]{}; // numCell*numCell 만큼의 보드 이차원 배열 선언
  int x, y; // 사용자에게 입력받는 x, y 좌표를 저장할 변수

  // 보드판 배열을 생성 (3, 3)
  for (x = 0; x < numCell; x++) {
    for (y = 0; y < numCell; y++) {
      board[x][y] = ' ';
    }
  }

  // 게임하는 코드
  int k = 0;              // 누구 차례인지 체크하기
  char currentUser = 'X'; // 현재 유저의 돌을 저장하기 위한 문자 변수
  bool gameWon = false; // 빙고 여부 체크 (초기상태는 flase 로 선언)
  bool boardFull = false; // 모든 칸이 찼는지 여부 체크 (초기상태는 flase 로 선언)

  while (!gameWon && !boardFull) { // 빙고가 완성되거나, 모든 칸이 차지 않는 이상 계속 게임 코드 반복
    // 1. 누구 차례인지 출력
    switch (k % 2) {
    case 0:
      cout << k % 2 + 1 << "번 유저(X)의 차례입니다 -> "; // 홀수번 user = X
      currentUser = 'X';
      break;
    case 1:
      cout << k % 2 + 1 << "번 유저(O)의 차례입니다 -> "; // 짝수번 user = O
      currentUser = 'O';
      break;
    }

    // 2. 좌표 입력 받기
    cout << "(x, y) 좌표를 입력하세요: ";
    cin >> x >> y;

    // 3. 입력받은 좌표의 유효성 체크
    if (x >= numCell ||
        y >= numCell) { // x혹은 y좌표가 3*3 배열보다 큰 값일 경우 유효성 검사
      cout << x << ", " << y << ": ";
      cout << " x와 y 둘 중 하나가 칸을 벗어납니다." << endl;
      continue;
    }
    if (board[x][y] != ' ') { // 지정한 x, y 좌표가 ' ' 빈 칸이 아닌 경우 (이미
                              // 돌이 차있는 경우) 유효성 검사
      cout << x << ", " << y << ": 이미 돌이 차있습니다.";
      continue;
    }

    // 4. 입력받은 좌표에 현재 유저의 돌 놓기
    board[x][y] = currentUser; // X 혹은 O 돌 놓기(위의 swtich 문에 따라 결정됨)

    // 5. 현재 보드 판 출력
    for (int i = 0; i < numCell; i++) {
      cout << "---|---|---" << endl;
      for (int j = 0; j < numCell; j++) {
        cout << board[i][j];
        if (j == numCell - 1) {
          break;
        }
        cout << "  |";
      }
      cout << endl;
    }
    cout << "---|---|---" << endl;

    // 6. 빙고 확인 (가로, 세로, 대각선)
    // 가로 빙고 확인
    for (int i = 0; i < numCell; i++) {
      if (board[i][0] == currentUser && board[i][1] == currentUser && board[i][2] == currentUser) {
        gameWon = true;
        break;
      }
    }

    // 세로 빙고 확인
    for (int i = 0; i < numCell; i++) {
      if (board[0][i] == currentUser && board[1][i] == currentUser && board[2][i] == currentUser) {
        gameWon = true;
        break;
      }
    }

    // 대각선 빙고 확인
    if ((board[0][0] == currentUser && board[1][1] == currentUser && board[2][2] == currentUser) ||
        (board[0][2] == currentUser && board[1][1] == currentUser && board[2][0] == currentUser)) {
      gameWon = true;
        break;
    }

    // 7. 모든 칸이 찼는지 확인
    boardFull = true;
    for (int i = 0; i < numCell; i++) {
      for (int j = 0; j < numCell; j++) {
        if (board[i][j] == ' ') {
          boardFull = false;
          break;
        }
      }
      if (!boardFull)
        break;
    }

    k++;
  }

  // 8. 빙고 시 승자 출력 후 종료 (가로, 세로, 대각선)
  if (gameWon) {
    cout << "빙고! " << currentUser << " 플레이어가 승리하였습니다." << endl;
  } else {
    cout << "무승부! 모든 칸이 찼습니다." << endl;
  }

  return 0;
}
