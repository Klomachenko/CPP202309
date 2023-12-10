#include <iostream>
using namespace std;

int dividePizza(int pizza_slices, int persons);

int main()
{
  int pizza_slices = 0;
  int persons = -1;
  int slices_per_person = 0;

  try
  {
    cout << "피자 조각수를 입력하시오: ";
    cin >> pizza_slices;
    cout << "사람수를 입력하시오: ";
    cin >> persons;
    if (persons == 0)
    {
      throw invalid_argument("0으로 나눌 수 없음");
    }

    slices_per_person = dividePizza(pizza_slices, persons);
    cout << "한사람당 피자는 " << slices_per_person << "입니다." << endl;
  }
  catch (exception &e)
  {
    cout << "에러: " << e.what() << endl;
  }
  catch (...)
  {
    cout << "에러" << endl;
  }
  return 0;
}

int dividePizza(int pizza_slices, int persons)
{
  if (persons == 0)
  {
    throw persons;
  }
  return pizza_slices / persons;
}