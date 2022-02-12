#include <iostream>
using namespace std;

// Carクラスの宣言
class Car{
private:
    int num;
    double gas;

public:
    Car(int n=0, double g=0.0);
    void show();
};

// Carクラスメンバ関数の定義
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
