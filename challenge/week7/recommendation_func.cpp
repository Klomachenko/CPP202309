#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int NUM_USERS = 3;
const int NUM_ITEMS = 3;

void initializePreferences(int userPreferences[NUM_USERS][NUM_ITEMS]);
void findRecommendedItems(const int userPreferences[NUM_USERS][NUM_ITEMS]);

int main()
{
    int userPreferences[NUM_USERS][NUM_ITEMS];
    // 난수 생성을 위한 시드 설정
    srand(time(0));

    // 사용자 선호도 초기화 함수 호출
    initializePreferences(userPreferences);
    // 추천 항목 찾기 함수 호출
    findRecommendedItems(userPreferences);

    return 0;
}

// 사용자 선호도를 초기화하는 함수
void initializePreferences(int userPreferences[NUM_USERS][NUM_ITEMS])
{
    for (int i = 0; i < NUM_USERS; ++i)
    {
        cout << "사용자 " << (i + 1) << "의 선호도를 입력하세요 (";
        cout << NUM_ITEMS << "개의 항목에 대해 ):";
        for (int j = 0; j < NUM_ITEMS; j++)
        {
            // 각 사용자의 선호도를 입력 받음
            cin >> userPreferences[i][j];
        }
    }
}

// 추천 항목을 찾고 출력하는 함수
void findRecommendedItems(const int userPreferences[NUM_USERS][NUM_ITEMS])
{
    for (int i = 0; i < NUM_USERS; ++i)
    {
        // 가장 높은 선호도를 첫 번째 항목으로 초기화 (행만 해당한다)
        int maxPreference = userPreferences[i][0];
        // 가장 높은 선호도를 가진 항목의 인덱스를 저장하는 변수 (행, 열을 모두 포함)
        int maxPreferenceIndex = 0;

        for (int j = 1; j < NUM_ITEMS; j++)
        {
            if (userPreferences[i][j] > maxPreference)
            {
                // 더 높은 선호도를 가진 것이 있다면 업데이트
                maxPreference = userPreferences[i][j];
                // 해당 인덱스 또한 업데이트
                maxPreferenceIndex = j;
            }
            else if (userPreferences[i][j] == maxPreference)
            {
                if (rand() % 2 == 0)
                {
                    // 선호도가 동일한 경우 랜덤으로 선택
                    maxPreferenceIndex = j;
                }
            }
        }

        // 사용자에게 추천하는 항목 출력
        cout << "사용자 " << (i + 1) << "에게 추천하는 항목 ";
        // 1부터 출력하기 위해 인덱스에 1을 더함
        cout << (maxPreferenceIndex + 1) << endl;
    }
}
