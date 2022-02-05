#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int* pA;
    // or int *pA;

    a = 5;
    b = 10;

    pA = &a;
    cout << "変数aの値は" << a << "です。\n";
    cout << "変数aのアドレスは" << &a << "です。\n";
    cout << "ポインタpAの値は" << pA << "です。\n";
    cout << "*pAの値は" << *pA << "です。\n";

    pA = &b;
    cout << "--------\n";
    cout << "変数bの値は" << b << "です。\n";
    cout << "変数bのアドレスは" << &b << "です。\n";
    cout << "ポインタpAの値は" << pA << "です。\n";
    cout << "*pAの値は" << *pA << "です。\n";

    *pA = 50;
    cout << "--------\n";
    cout << "*pAに50を代入しました。\n";
    cout << "変数bの値は" << b << "です。\n";

    return 0;
}
