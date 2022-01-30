#include <iostream>
using namespace std;

int main()
{
  char res;

  cout << "あなたは男性ですか？\n";
  cout << "YかNで入力してください。\n";
  cin >> res;

  if (res == 'Y' || res == 'y'){
    cout << "あなたは男性です。\n";
  }
  else if (res == 'N' || res == 'n'){
    cout << "あなたは女性です。\n";
  }
  else {
    cout << "YかNで入力してください。\n";
  }

  cout << "処理を終了します。\n";

  return 0;
}
