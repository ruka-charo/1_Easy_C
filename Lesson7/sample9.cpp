#include <iostream>
using namespace std;

// max関数の定義
inline int max(int x, int y){
    if (x < y)
        return y;
    else
        return x;
}

int main(){
    int x, y, ans;

    cout << "2つの数字を入れてください。\n";
    cin >> x >> y;

    ans = max(x, y);
    cout << "大きい方は" << ans << "です。\n";

    return 0;
}
