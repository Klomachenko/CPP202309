#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));

    // 정수변수 선언
    int answer = rand() % 100; // 0부터 99 사이의 난수 생성
    int tries = 0;
    int guess;

    do
    {
        // 무조건 한번은 실행할 내용
        cout << "정답을 추측하여 보세요: ";
        // guess 값을 사용자로부터 받음
        cin >> guess;
        // 실행될때마다 tries 값에 1씩 더해짐
        tries++;

        // 사용자의 입력값이 정답보다 작을 경우
        if (guess < answer)
        {
            cout << "제시한 정수가 높습니다." << endl;
        }
        // 사용자의 입력값이 정답보다 큰 경우
        else if (guess > answer)
        {
            cout << "제시한 정수가 낮습니다." << endl;
        }
    } while (guess != answer);
    // 사용자의 입력값이 정답과 같은 경우 탈출
    cout << "축하합니다. 시도 횟수=" << tries << endl;

    return 0;
}
