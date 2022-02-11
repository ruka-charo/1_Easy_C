#include <iostream>
using namespace std;

// Carクラスの定義
class Car{
private:
    int num;
    double gas;

public:
    // インライン関数
    int getNum(){return num;}
    double getGas(){return gas;}
    void show();
    void setNumGas(int n, double g);
};

// クラスメンバ関数の定義
void Car::show(){
    cout << "車のナンバーは" << num << endl;
    cout << "ガソリンの量は" << gas<< endl;
}

void Car::setNumGas(int n, double g){
    if (g > 0 && g < 1000){
        num = n;
        gas = g;
        cout << "ナンバーを" << num << "、ガソリン量を" << gas << "にしました。\n";
    }
    else{
        cout << g << "は正しいガソリン量ではありません。\n";
        cout << "ガゾリン量を設定できませんでした。\n";
    }
}

// buy関数を宣言
void buy(Car c);


int main(){
    Car car1;

    car1.setNumGas(1234, 20.5);
    car1.show();
    buy(car1);

    return 0;
}


// buy関数の定義
void buy(Car c){
    int n = c.getNum();
    double g = c.getGas();

    cout << "ナンバー" << n << "、ガソリン量" << g << "の車を購入しました。\n";
}
