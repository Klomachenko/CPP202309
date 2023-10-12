#include <iostream>
#include <string>
using namespace std;

int main()
{
    int maxPeople;
    cout << "총 고객의 수를 입력하라: ";
    cin >> maxPeople;

    string names[maxPeople];
    int ages[maxPeople];

    // 고객의 이름과 나이를 입력 받는 코드
    // 고객의 이름과 나이를 maxpeople 수만큼 순회하며 받아야 함
    for (int i = 0; i < maxPeople; ++i)
    {
        cout << "고객" << i + 1 << "의 이름을 입력하세요 : ";
        cin >> names[i];
        cout << "고객" << i + 1 << "의 나이를 입력하세요 : ";
        cin >> ages[i];
    }

    int ageThreshold;
    cout << "특정 나이 이상인 사람을 찾으려면 나이를 입력하세요 : ";
    cin >> ageThreshold;

    cout << ageThreshold << "세 이상인 고객들:\n";

    // agethreshold보다 나이가 많은 고객 이름(나이)출력 코드
    int oldBoy = 0;
    for (int i = 0; i < maxPeople; ++i)
    {
        if (ages[i] >= ageThreshold)
        {
            cout << names[i] << "는" << ages[i] << "세 로" << ageThreshold << "세 이상입니다." << endl;
            oldBoy++;
        }
        else if (ages[i] < ageThreshold)
        {
            continue;
        }
    }
    if (oldBoy == 0)
    {
        cout << ageThreshold << "세 이상의 고객이 존재하지 않습니다.";
    }

    // agethreshold 보다 나이가 많은 고객이 없는 경우

    // 현재 코드의 문제점  몇 세 이상의 나이를 가진 고객이 없는 경우 그냥 break 를 해줘야 한다.

    return 0;
}
