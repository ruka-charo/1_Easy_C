#include <iostream>
using namespace std;

int main()
{
  int num1 = 2;
  int num2 = 3;
  int sum = num1 + num2;

  cout << "変数num1の値は" << num1 << "です。\n";
  cout << "変数num2の値は" << num2 << "です。\n";
  cout << "変数num1 + num2の値は" << num1 + num2 << "です。\n";

  num1 = num1 + 1;

  cout << "num1の値に1を足すと" << num1 << "です。\n";

  return 0;
}
