#include <iostream>
#include <string>

using namespace std;

int main()
{
	// 문자열 변수 선언
	string name;
	// cout를 이용하여 출력
	cout << "이름을 입력하세요: ";
	// cin을 이용하여 사용자로부터 값을 입력받을 수 있음
	// name에 입력받은 값을 저장
	cin >> name;
	cout << name << "을 환영합니다." << endl;

	// 화살표 연산자 추가 설명
	// 방향이 매우 중요하다!
	// >> 은 입력 방향이며, 추출 연산자이다. 입력으로 데이터를 추출할 때 사용하며 'cin'과 함께 사용되어 사용자 입력을 프로그램으로 가져오는 데 사용한다.
	// << 은 출력 방향이며, 삽입 연산자이다. 출력으로 데이터를 삽입할 때 사용되며 'cout'와 함께 사용되어 프로그램의 출력을 화면에 표시하는 데 사용한다.
	return 0;
}