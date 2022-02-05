#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int& ra = a; //参照raを初期化

    cout << "変数aの値は" << a << "です。\n";
    cout << "参照raの値は" << ra << "です。\n";

    ra = 50;
    cout << "raに50を代入しました。\n";
    cout << "参照raの値は" << ra << "に変更されました。\n";
    cout << "変数aの値も" << a << "に変更されました。\n";
    cout << "変数aのアドレスは" << &a << "です。\n";
    cout << "参照raのアドレスも" << &ra << "です。\n";

    return 0; 
}
