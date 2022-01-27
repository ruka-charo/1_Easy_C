#include <iostream>
using namespace std;

int main()
{
  int a = 0;
  int b = 0;
  int c = 0;
  int d = 0;

  b = ++a;
  d = c++;

  cout << "前置インクリメント" << b << "\n";
  cout << "aに1加えてからbに代入\n";
  cout << "後置インクリメント" << d << "\n";
  cout << "dに代入してからcに1を加える\n";

  return 0;
}
