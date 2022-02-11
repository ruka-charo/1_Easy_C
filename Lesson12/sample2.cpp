#include <iostream>
using namespace std;

// Carクラスの宣言
class Car{
private:
    int num;
    double gas;
public:
    void show();
    void setNumGas(int n, double g);
};

// Carクラスメンバ関数の定義
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


int main(){
    Car car1, car2;

    // 以下のようなアクセスはできない
    // car1.num = 1234;
    // car1.gas = 20.5;

    // バブリックメンバを呼び出して設定
    car1.setNumGas(1234, 20.5);
    car1.show();

    cout << "正しくないガソリン量を入れると…。\n";
    car2.setNumGas(1223, -10);
    car2.show();

    return 0;
    }
