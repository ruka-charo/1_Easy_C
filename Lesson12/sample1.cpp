#include <iostream>
using namespace std;

// Carクラスの宣言
class Car{
    public:
        int num;
        double gas;
        void show();
};

// Carクラスメンバ関数の定義
void Car::show(){
    cout << "車のナンバーは" << num << endl;
    cout << "ガソリンの量は" << gas<< endl;
}


int main(){
    Car car1;

    car1.num = 1234;
    car1.gas = 20.5;

    car1.show();

    return 0;
    }
