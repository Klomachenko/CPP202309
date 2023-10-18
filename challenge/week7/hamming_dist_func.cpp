#include <iostream>
#include <string>
#include <cctype> // 필요한 헤더 파일 추가
using namespace std;

// 문자열의 모든 문자를 소문자로 변환
string toLowerStr(string str)
{
    for (char &c : str)
    {
        c = tolower(c);
    }
    return str;
}

// 문자열의 모든 문자를 대문자로 변환
string toUpperStr(string str)
{
    for (char &c : str)
    {
        c = toupper(c);
    }
    return str;
}

// 대소문자 관계 없이 해밍 거리 계산
int calcHammingDist(string s1, string s2)
{
    int count = 0;

    // 문자열 길이가 다른 경우 오류 출력
    if (s1.length() != s2.length())
    {
        cout << "오류: 길이가 다름" << endl;
        return -1; // 오류를 나타내는 값을 반환
    }

    // 대소문자 관계 없이 비교하여 해밍 거리 계산
    for (int i = 0; i < s1.length(); i++)
    {
        if (tolower(s1[i]) != tolower(s2[i]))
        {
            count++;
        }
    }

    return count;
}

int main()
{
    string s1, s2;
    int count = 0;

    while (true)
    { // 무한 루프로 길이가 같은 문자열 입력을 요청
        cout << "문자열1: ";
        cin >> s1;
        cout << "문자열2: ";
        cin >> s2;

        if (s1.length() != s2.length())
        {
            cout << "오류: 길이가 다름" << endl;
        }
        else
        {
            break; // 길이가 같으면 루프 종료
        }
    }

    // 대소문자 관계 없이 해밍 거리 계산
    int hammingDist = calcHammingDist(s1, s2);
    if (hammingDist != -1)
    {
        cout << "해밍 거리는 " << hammingDist << endl;
    }

    return 0;
}
