#include <iostream>
using namespace std;

int main()
{
  int sum = 0;
  int num = 0;

  cout << "1番目の数字を入力してください。\n";
  cin >> num;
  sum += num;

  cout << "2番目の数値を入力してください。 \n";
  cin >> num;
  sum += num;

  cout << "3番目の数値を入力してください。\n";
  cin >> num;
  sum += num;

  cout << "3つの数値の合計は" << sum << "\n";

  return 0;
}
