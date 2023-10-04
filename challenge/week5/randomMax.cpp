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
    // 정수 변수 선언
    // max 즉 최댓값을 [0][0]이라는 첫째 위치로 해주면 탐색이 더 편하지 않을까? 하여 코드 삽입
    // 완전탐색 알고리즘을 생각하고 코드를 작성해보자
    int max = numList[0][0];  
    int maxI;  
    int maxJ;

    // 이중for문 이용 모든 수를 돌며 위치를 찾는다
    for (int i = 0; i < numCell; ++i) {
        for (int j = 0; j < numCell; ++j) {
            if (numList[i][j] > max) {
                max = numList[i][j];
                maxI = i;
                maxJ = j;
            }
        }
    }

    cout << "가장 큰 값은 " << max << "이고, ";
    cout << "i와 j는 각각 " << maxI << ", " << maxJ << "입니다." << endl;
    cout << "검증 결과: " << numList[maxI][maxJ] << "입니다." << endl;

    return 0;
}
