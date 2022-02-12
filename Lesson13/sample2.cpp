#include <iostream>
using namespace std;

// Carクラスの宣言
class Car{
private:
    int num;
    double gas;

public:
    Car();
    Car(int n, double g);
    void show();
};

// Carクラスメンバ関数の定義
Car::Car(){
    num = 0;
    gas = 0.0;
    cout << "車を作成しました。\n";
}

Car::Car(int n, double g){
    num = n;
    gas = g;
    cout << "ナンバー" << n << "、ガソリン量" << g << "の車を作成しました。\n";
}

void Car::show(){
    cout << "ナンバー" << num << "、ガソリン量" << gas << "です\n";
}


int main(){
    Car car1;
    Car car2(1234, 20.5);

    return 0 ;
    }
