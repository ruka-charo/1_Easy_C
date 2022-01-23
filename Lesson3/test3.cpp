#include <iostream>
using namespace std;

int main()
{
  // 第一問
  double pi, height, weight;
  char word;

  cout << "円周率の値はいくつですか？\n";
  cin >> pi;
  cout << "円周率の値は" << pi << "です。\n";

  // 第二問
  cout << "アルファベットの最初の文字は何ですか？\n";
  cin >> word;
  cout << "アルファベットの最初の文字は" << word << "です。\n";

  //第三問
  cout << "身長と体重を入力してください。\n";
  cin >> height >> weight;
  cout << "身長は" << height << "cmです。\n";
  cout << "体重は" << weight << "kgです。\n";

  return 0;
}
