#include <iostream>
#include <string>
using namespace std;

int main()
{
    int maxPeople;
    cout << "총 고객의 수를 입력하라: ";
    cin >> maxPeople;

    // 동적으로 문자열 배열 할당
    string *names = new string[maxPeople];
    // 동적으로 정수 배열 할당
    int *ages = new int[maxPeople];

    // 고객의 이름과 나이를 입력 받는 코드
    // 고객의 이름과 나이를 maxPeople 수만큼 순회하며 받아야 함
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
            cout << names[i] << "는 " << ages[i] << "세 로 " << ageThreshold << "세 이상입니다." << endl;
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

    // 동적으로 할당한 메모리 해제
    delete[] names;
    delete[] ages;

    return 0;
}
