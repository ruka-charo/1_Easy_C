#include <iostream>
using namespace std;

// Carクラスの宣言
class Car{
private:
    int num;
    double gas;
public:
    Car();
    void setCar(int n, double g);
    void show();
};

// Racing Carクラスの宣言
class RacingCar : public Car{
private:
    int course;
public:
    RacingCar();
    void setCourse(int c);
};

// Carクラスメンバ関数の定義
Car::Car(){
    num = 0;
    gas = 0.0;
    cout << "車を作成しました。\n";
}

void Car::setCar(int n, double g){
    num = n;
    gas = g;
    cout << "ナンバーを" << n << "、ガソリン量を" << g << "に設定しました。\n";
}

// RacingCarクラスメンバ関数の定義
RacingCar::RacingCar(){
    course = 0;
    cout << "レーシングカーを作成しました。\n";
}

void RacingCar::setCourse(int c){
    course = c;
    cout << "コース番号を" << c << "に設定しました。\n";
}


int main(){
    RacingCar rccar1;

    rccar1.setCar(1234, 20.5);
    rccar1.setCourse(2);

    return 0;
}
