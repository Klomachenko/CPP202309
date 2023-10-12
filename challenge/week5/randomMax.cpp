#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
    const int numCell = 10;
    int numList[numCell][numCell];

    // srand를 호출하여 난수 생성을 위한 시드 설정
    srand(time(NULL));

    // 2차원 배열에 난수를 저장
    for (int i = 0; i < numCell; ++i) {
        for (int j = 0; j < numCell; ++j) {
            // 0,0 부터 9,9까지 난수를 저장함
            // 이때 1000으로 나눠 0 ~ 999 사이의 수를 생성
            numList[i][j] = rand() % 1000;  
        }
    }

    // 최댓값과 해당 위치 찾기
    int max = numList[0][0];
    int maxI = 0;
    int maxJ = 0;

    // 이중 for문 이용 모든 수를 돌며 위치를 찾는다
    for (int i = 0; i < numCell; ++i) {
        int j = 0;  // 변수 j를 0으로 초기화 j는 열의 인덱
        // 범위기반 for 문을 이용하여 각 행의 요소에 접근
        for (int currentNum : numList[i]) {
            // 각 행의 요소를 currentNum 변수에 순차적으로 할당하여 접근
            // 만약 현재 요소가 최댓값인 max보다 크다면 아래를 실행
            if (currentNum > max) {
                max = currentNum;  // 최댓값을 갱신
                maxI = i;  // 최댓값의 행 위치를 i로 갱신
                maxJ = j;  // 최댓값의 열 위치를 j로 갱신
            }
            j++;  // 열 인덱스 j를 증가시켜 다음 열의 요소로 이동
        }
    }

    cout << "가장 큰 값은 " << max << "이고, ";
    cout << "i와 j는 각각 " << maxI << ", " << maxJ << "입니다." << endl;
    cout << "검증 결과: " << numList[maxI][maxJ] << "입니다." << endl;

    return 0;
}