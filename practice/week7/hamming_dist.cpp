#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 문자열 변수 선언
    string s1, s2;
    // 정수 변수 선언
    int count = 0;

    // 사용자로부터 입력받기
    cout << "DNA1: ";
    cin >> s1;
    cout << "DNA2: ";
    cin >> s2;

    // 두 입력의 길이가 다른 경우 오류 출력
    if (s1.length() != s2.length())
        cout << "오류: 길이가 다름" << endl;
    // 두 입력의 길이가 같은 경우
    else
    {
        // s1의 인덱스를 하나씩 돌며 순회
        for (int i = 0; i < s1.length(); i++)
        {
            // s1과 s2의 동일한 위치의 문자가 다를 때 마다 count에 더해주기
            if (s1[i] != s2[i])
                count += 1;
        }
        cout << "해밍 거리는 " << count << endl;
    }
    return 0;
}