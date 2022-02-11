#include <iostream>
using namespace std;

// 構造体型の宣言
struct Car{
    int num;
    double gas;
};


int main(){
    Car car1, car2;
    car1 = {100, 10.10};
    car2 = {200, 20.20};

    cout << "car1のナンバーは" << car1.num << endl;
    cout << "car1の排気量は" << car1.gas << endl;
    cout << "car2のナンバーは" << car2.num << endl;
    cout << "car2の排気量は" << car2.gas << endl;

    car2 = car1;
    cout << "car2にcar1を代入しました。\n";

    cout << "car2のナンバーは" << car2.num << endl;
    cout << "car2の排気量は" << car2.gas << endl;

    return 0;
}
