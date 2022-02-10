#include <iostream>
using namespace std;

int a = 0;


// main関数
int main()
{
    int a = 10;
    int b, c;

    b = ++a; // ローカル変数をインクリメント
    c = ++::a; // グローバル変数をインクリメント

    cout << "a++ →" << b << "\n";
    cout << "::a++ →" << c << "\n";

    return 0;

}
