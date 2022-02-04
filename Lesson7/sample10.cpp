#include <iostream>
using namespace std;

// max関数の宣言
int max(int x, int y);

// max関数の呼び出し
int main(){
    int x, y, ans;

    cout << "2つの数字を入れてください。\n";
    cin >> x >> y;

    ans = max(x, y);
    cout << "大きい方は" << ans << "です。\n";

    return 0;
}

int max(int x, int y){
    if (x < y)
        return y;
    else
        return x;
}
