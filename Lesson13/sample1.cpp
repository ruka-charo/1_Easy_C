#include <iostream>
using namespace std;

// Carクラスの宣言
class Car{
private:
    int num;
    double gas;

public:
    Car();
    void show();
};

// クラスメンバ関数の定義
Car::Car(){
    num = 0;
    gas = 0.0;
    cout << "車を作成しました。\n";
}

void Car::show(){
    cout << "車のナンバーは" << num << endl;
    cout << "車のガソリン量は" << gas << endl;
}


int main(){
    Car car1;

    car1.show();

    return 0;
}
