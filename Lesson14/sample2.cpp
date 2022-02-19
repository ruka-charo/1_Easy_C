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
    void setCar(int n, double g);
    void show();
};

// Racing Carクラスの宣言
class RacingCar : public Car{
private:
    int course;
public:
    RacingCar();
    RacingCar(int n, double g, int c);
    void setCourse(int c);
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
    cout << "ナンバーを" << n << "、ガソリン量を" << g << "に設定しました。\n";
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

RacingCar::RacingCar(int n, double g, int c) : Car(n, g){
    course = c;
    cout << "コース番号" << c << "のレーシングカーを作成しました。\n";
}

void RacingCar::setCourse(int c){
    course = c;
    cout << "コース番号を" << c << "に設定しました。\n";
}


int main(){
    RacingCar rccar1(1234, 20.5, 5);
    RacingCar rccar2;

    return 0;
}
