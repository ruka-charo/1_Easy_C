#include <iostream>
using namespace std;

// 参照を用いたswap関数の定義
void r_swap(int& x, int& y);

// ポインタを用いたswap関数の定義
void p_swap(int* px, int* py);


int main(){
    int num1 = 5;
    int num2 = 10;

    cout << "変数num1の値は" << num1 << "です。\n";
    cout << "変数num2の値は" << num2 << "です。\n";
    cout << "変数num1とnum2の値を交換します。\n";

    r_swap(num1, num2);

    cout << "変数num1の値は" << num1 << "です。\n";
    cout << "変数num2の値は" << num2 << "です。\n";

    return 0;
}


void r_swap(int& x, int& y){
    int tmp;

    tmp = x;
    x = y;
    y = tmp;
}

void p_swap(int* px, int* py){
    int tmp;

    tmp = *px;
    *px = *py;
    *py = tmp;
}
