#include <iostream>
using namespace std;

int main()
{
  int res;

  cout << "何番目でループを終了しますか？(1〜10)\n";
  cin >> res;

  for (int i=1; i<=10; i++){
    if (i == res){
      cout << i << "番目のループなので処理を終了します。\n";
      break;
    }
    else{
      cout << i << "番目のループです。\n";
    }
  }

  return 0;
}
