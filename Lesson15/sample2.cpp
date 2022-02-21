#include <iostream>
#include <cstring>
using namespace std;

// Carクラスの宣言
class Car{
private:
    int num;
    double gas;
    char* pName;
public:
    Car(const char* pN, int n, double g);
    ~Car();
    void show();
};


// Carクラスメンバ関数の定義
Car::Car(const char* pN, int n, double g){
    pName = new char[strlen(pN) + 1];
    strcpy(pName, pN);
    num = n;
    gas = g;
    cout << pName << "を作成しました。\n";
}

Car::~Car(){
    cout << pName << "を破棄します。\n";
    delete[] pName;
}

void Car::show(){
    cout << "車のナンバーは" << num << endl;
    cout << "ガソリン量は" << gas << endl;
    cout << "名前は" << pName << endl;
}


int main(){
    Car car1("mycar", 1234, 20.5);
    car1.show();

    return 0;
}
