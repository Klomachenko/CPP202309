#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 힉생, 과목 정수 변수 선언
    const int STUDENT = 5;
    const int SUBJECT = 3;
    // scores 2차원 배열 선언 
    // 배열의 크기 : 5*3
    int scores[STUDENT][SUBJECT];
    // 5개의 원소를 가진 배열 선언
    string studentNames[STUDENT]
        = {"영수", "영희", "철수", "미미", "쥬쥬"};
    // 3개의 원소를 가진 배열 선언
    string subjectNames[SUBJECT]
        = {"수학", "영어", "CPP"};

    // 학생 한명씩 체크하며 돌아가는 반복문
    for (int i = 0; i < STUDENT; i++){
        cout << studentNames[i]
            << "의 성적을 하나씩 입력하세요." << endl;
        // 과목 한번씩 돌아가는 반복문
        for(int j = 0; j < SUBJECT; j++){
            // 과목 이름 출력
            cout << subjectNames[i] << ":";
            // 학생별[i] 과목[j] 점수 사용자로부터 입력받음
            cin >> scores[i][j];
        }
    }
    // 학생 한명씩 체크하며 돌아가느느 반복문
    for (int i = 0; i < STUDENT; i++){
        cout << studentNames[i]
            << "의 평균 점수는 .";
            // 실수 변수 선언
            double sum = 0;
            double average = 0;
            // 과목 하나씩 돌아가는 반복문
            for(int j = 0; j < SUBJECT; j++){
                // sum에 학생별 3개의 과목 값을 모두 더함
                sum += scores[i][j];
            }
            // 학생별 더한 값을 과목수(3)으로 나눠 평균 산출
            average = sum / SUBJECT;
            cout << average << "입니다" << endl;
    } 
    return 0;
}