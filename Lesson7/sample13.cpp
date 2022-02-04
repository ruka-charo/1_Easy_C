#include <iostream>
using namespace std;

// テンプレート関数の宣言
template <class T>
T maxt(T x, T y);

int main(){
    int a, b, ans1;
    double da, db, ans2;

    cout << "2つの整数を入力してください。\n";
    cin >> a >> b;

    ans1 = maxt(a, b);
    cout << "2つのうち大きいのは" << ans1 << "です。\n";

    cout << "2つの実数を入力してください。\n";
    cin >> da >> db;

    ans2 = maxt(da, db);
    cout << "2つのうち大きいのは" << ans2 << "です。\n";

    return 0;
}


// 関数テンプレート
template <class T>
T maxt(T x, T y){
    if (x < y)
        return y;
    else
        return x;
}
