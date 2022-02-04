#include <iostream>
using namespace std;

// buy関数の定義
int buy(int x, int y){
    int z;

    cout << x << "万円と" << y << "万円の車を買いました。\n";

    z = x + y;

    return z;
}


int main(){
    int x, y, z;

    cout << "2台の車の値段はいくらですか？\n";
    cin >> x >> y;

    z = buy(x, y);

    cout << "合計は" << z << "万円です。\n";

    return 0;
}
