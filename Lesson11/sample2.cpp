#include <iostream>
using namespace std;


// 構造体型を宣言
struct Car{
    int num;
    double gas;
};


int main(){
    Car car1;
    // 構造体型の簡単な初期化方法
    // car1 = {32143, 23.44};

    cout << "ナンバーを入力してください。\n";
    cin >> car1.num;

    cout << "排気量を入力してください。\n";
    cin >> car1.gas;

    cout << "車のナンバーは" << car1.num << "です。\n";
    cout << "車の排気量は" << car1.gas << "です。\n";

    return 0;
}
