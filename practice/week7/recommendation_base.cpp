#include <iostream>
using namespace std;

int main()
{
    // 상수 변수 선언 및 값 할당
    const int NUM_USERS = 3;
    const int NUM_ITEMS = 3;
    // 3, 3 2차원 정수 배열 선언
    int userPreferences[NUM_USERS][NUM_ITEMS];

    // 사용자와 항목 간의 선호도를 입력 받아 2차원 배열 초기화
    for (int i = 0; i < NUM_USERS; ++i)
    {
        // 각 사용자로부터 선호도를 입력받음
        cout << "사용자 " << (i + 1) << "의 선호도를 입력하세요 (";
        cout << NUM_ITEMS << "개의 항목에 대해):";
        for (int j = 0; j < NUM_ITEMS; j++)
        {
            // 사용자로부터 0,0 ~ 2,2 까지의 선호도를 모두 입력받음
            cin >> userPreferences[i][j];
        }
    }

    // 각 사용자에 대한 추천 항목 찾기
    for (int i = 0; i < NUM_USERS; ++i)
    {
        // 가장 선호도가 높은 것을 의미하는 변수 0으로 우선 초기화
        int maxPreferenceIndex = 0;
        for (int j = 0; j < NUM_ITEMS; j++)
        {
            // 하나씩 다 꺼내가며 선호도 크기 비교
            if (userPreferences[i][j] > userPreferences[i][maxPreferenceIndex])
            {
                // 가장 선호도가 높은 것의 j(열) 인덱스를 받아 저장
                maxPreferenceIndex = j;
            }
        }

        // 사용자에게 추천하는 항목 출력
        cout << "사용자 " << (i + 1) << "에게 추천하는 항목 ";
        // 순서를 위해 0,1,2 가 아니라 1,2,3이 나오도록 함
        cout << (maxPreferenceIndex + 1) << endl;
    }
    return 0;
}