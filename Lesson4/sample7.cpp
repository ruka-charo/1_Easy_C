#include <iostream>
using namespace std;

int main()
{
  int a = 1;
  int b = 0;

  cout << "short int型のサイズは" << sizeof(short int) << "バイトです。\n";
  cout << "int型のサイズは" << sizeof(int) << "バイトです。\n";
  cout << "long int型のサイズは" << sizeof(long int) << "バイトです。\n";

  cout << "float型のサイズは" << sizeof(float) << "バイトです。\n";
  cout << "double型のサイズは" << sizeof(double) << "バイトです。\n";

  cout << "変数aのサイズは" << sizeof(a) << "です。\n";
  cout << "変数a+bのサイズは" << sizeof(a+b) << "です。\n";

  return 0;
}
