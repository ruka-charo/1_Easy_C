#include <iostream>
using namespace std;

int main()
{
  int res;

  cout << "整数を入力してください。\n";
  cin >> res;

  switch(res){
    case 1:
      cout << "1が入力されました。\n";
      break;

    case 2:
      cout << "2が入力されました。\n";
      break;

    case 3:
      cout << "1と2以外が入力されました。\n";
      break;
  }

  cout << "処理を終了します。\n";

  return 0;
}
