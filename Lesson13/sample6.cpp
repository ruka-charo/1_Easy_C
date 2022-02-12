#include <iostream>
using namespace std;

// Carクラスを宣言
class Car{
private:
    int num;
    double gas;

public:
    static int sum;
    Car();
    void setCar(int n, double g);
    void show();
    static void showSum();
};

// Carクラスメンバ関数の定義
Car::Car(){
    num = 0;
    gas = 0.0;
    sum++;

    cout << "車を作成しました。\n";
}

void Car::setCar(int n, double g){
    num = n;
    gas = g;

    cout << "ナンバー" << n << "、ガソリン量" << g << "の車を作成しました。\n";
}

void Car::showSum(){
    cout << "車は全部で" << sum << "台です。\n";
}

void Car::show(){
    cout << "車のナンバーは" << num << endl;
    cout << "ガソリン量は" << gas <<endl;
}

int Car::sum = 0;


int main(){
    Car::showSum();

    Car car1;
    car1.setCar(1234, 20.5);

    Car::showSum();

    Car car2;
    car2.setCar(4567, 30.5);

    Car::showSum();

    return 0;
    }
