#include <iostream>
using namespace std;

int main()
{
    const int numStudents = 5;
    double grades[numStudents];

    for (int i = 0; i < numStudents; i++)
    {
        cout << "학생" << i + 1 << "의 성적을 입력하라: ";
        cin >> grades[i];
    }

    cout << "학생 성적 목록: " << endl;
    for (int i = 0; i < numStudents; i++)
    {
        cout << "학생" << i + 1 << "의 성적: ";
        cout << grades[i] << endl;
    }
}