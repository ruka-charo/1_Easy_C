#include <iostream>
using namespace std;

//コメント

/*
複数行のコメント
*/

int main()
{
  cout << 'A' << '\n';
  cout << "ようこそC++へ！\n";
  cout << 123 << '\n';

  cout << "8進数101の文字コードを持つ文字は" << '\101' << "です。\n";
  cout << "16進数61の文字コードを持つ文字は" << '\x61' << "です。\n";

  cout << "10進数の10は" << 10 << "です。\n";
  cout << "8進数の10は" << 010 << "です。\n";
  cout << "16進数の10は" << 0x10 << "です。\n";
  cout << "16進数のFは" << 0xF << "です。\n";

  return 0;
}