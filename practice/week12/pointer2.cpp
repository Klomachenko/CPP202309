#include <iostream>
#include <time.h>
using namespace std;

int main()
{
  int *ptr;
  srand(time(NULL)); // 난수발생기시드설정
  ptr = new int[10]; // 1 동적 메모리 할당

  for (int i = 0; i < 10; i++)
    ptr[i] = rand(); // 2 동적 메모리 사용

  for (int i = 0; i < 10; i++)
    cout << ptr[i] << " ";

  delete[] ptr; // 3 동적 메모리 반납
  cout << endl;
  return 0;
}