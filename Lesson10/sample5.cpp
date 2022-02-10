#include <iostream>
#include "myfunc.h"
using namespace std;


int main(){
    int x, y, ans;

    cout << "1番目と2番目の整数を入力してください。\n";
    cin >> x >> y;

    ans = max(x, y);
    cout << "最大値は" << ans << endl;

    return 0;
}
