#include <iostream>
using namespace std;

// Carクラスの宣言
class Car{
protected:
    int num;
    double gas;

public:
    Car();
    void setCar(int n, double g);
    virtual void show();
};

//RacingCarクラスの宣言
class RacingCar : public Car{
private:
    int course;

public:
    RacingCar();
    void setCourse(int c);
    void show();
};

//クラスメンバ関数の定義
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

void Car::show(){
    cout << "車のナンバーは" << num << endl;
    cout << "ガソリン量は" << gas << endl;
}

//RacingCarクラスメンバ関数の定義
RacingCar::RacingCar(){
    course = 0;
    cout << "レーシングカーを作成しました。\n";
}

void RacingCar::setCourse(int c){
    course = c;
    cout << "コース番号を" << course << "に設定しました。\n";
}

void RacingCar::show(){
    cout << "レーシングカーのナンバーは" << num << endl;
    cout << "ガソリン量は" << gas << endl;
    cout << "コース番号は" << course << endl;
}


int main(){
    /* 普通に呼び出す
    Car car1;
    RacingCar rccar1;

    car1.setCar(1234, 20.5);
    rccar1.setCar(5678, 50);
    rccar1.setCourse(2);

    car1.show();
    rccar1.show();
    */

    // ポインタで呼び出す
    Car* pCars[2];
    Car car2;
    RacingCar rccar2;

    pCars[0] = &car2;
    pCars[0]->setCar(1357, 10.5);

    pCars[1] = &rccar2;
    pCars[1]->setCar(2468, 60.5);

    for(int i=0; i<=2; i++){
        pCars[i]->show();
    }

    return 0;
}
