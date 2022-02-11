#include <iostream>
using namespace std;

// 構造体型の宣言
struct Car{
    int num;
    double gas;
};

// 関数の宣言
void show(Car* pC);


int main(){
    Car car1;
    car1 = {0, 0.0};

    cout << "車のナンバーを入力してください。\n";
    cin >> car1.num;
    cout << "車の排気量を入力してください。\n";
    cin >> car1.gas;

    show(&car1);


    return 0;
}


// 関数の定義
void show(Car* pC){
    cout << "車のナンバーは" << pC->num << endl;
    cout << "車の排気量は" << pC->gas << endl;
}
