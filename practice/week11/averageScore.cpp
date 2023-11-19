#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> score;
  int i = 0;
  int sum = 0;

  while (true)
  {
    int score;
    cout << "성적을 입력하시오 (종료는 -1)" << endl;
    cin >> score;

    if (score == -1)
      break;
    score.push_back(score);
  }
  for (auto &value : score)
  {
    sum += value;
  }
  double avg = (double)sum / score.size();
  cout << "성적 평균=" << avg << endl;
  return 0;
}