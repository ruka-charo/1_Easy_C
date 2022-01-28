#include <iostream>
using namespace std;

int main()
{
  int num1 = 5;
  int num2 = 4;
  double div, div_double;

  div = num1 / num2;

  cout << "5/4の結果は" << div << "です(int型)。\n";

  div_double = (double)num1 / (double)num2;

  cout << "5/4の結果は" << div_double << "です(double型)。\n";

  return 0;
}
