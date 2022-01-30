#include <iostream>
using namespace std;

int main()
{
  int num;

  cout << "いくつ「*」を出力しますか？\n";
  cin >> num;
  cout << num << "回繰り返します。\n";

  for (int i; i<=num; i++){
    cout << "*";
  }

  return 0;
}
