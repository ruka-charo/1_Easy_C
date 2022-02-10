#include <iostream>
using namespace std;

// func関数の宣言
void func();

int a = 0;


// main関数
int main(){
    for (int i = 0; i < 5; i++){
        func();
    }

    return 0;
}


void func(){
    int b = 0;
    static int c = 0;

    cout << "------------" << endl;
    cout << "グローバル変数aは" << a << endl;
    cout << "ローカル変数bは" << b << endl;
    cout << "staticローカル変数cは" << c << endl;

    a++;
    b++;
    c++;
}
