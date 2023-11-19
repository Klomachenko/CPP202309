#include <iostream>
using namespace std;

int main()
{
    int vowel = 0;
    int consonant = 0;
    cout << "영문자를 입력하고 ctrl+z를 치세요" << endl;

    char ch; // 사용자 입력 저장하기 위한 변수

    while (cin >> ch) // 사용자 입력을 받음
    {
        // 모음인 경우 vowel 값을 올림, 그 외의 경우 cononant 값을 올림
        switch (ch)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            vowel++;
            break;
        default:
            consonant++;
        }
    }

    // ctrl + z 입력 시 반복문 탈출하고 결과를 출력한다.
    cout << "모음: " << vowel << endl;
    cout << "자음: " << consonant << endl;

    return 0;
}