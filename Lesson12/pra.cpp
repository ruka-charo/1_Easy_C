#include <iostream>
using namespace std;

// クラスの定義
class Point{
private:
    int x, y;

public:
    void setX(int a);
    void setY(int b);
    int getX(){return x;}
    int getY(){return y;}
};

// クラスメンバ関数を定義する
void Point::setX(int a){
    if (0 <= a && a <= 10){
        x = a;
        cout << "x座標を" << a << "に設定しました。\n";
    }
    else{
        x = 0;
        cout << a << "の値は不適切です。0に設定しました。\n";
    }
}

void Point::setY(int b){
    if (0 <= b && b <= 10){
        y = b;
        cout << "y座標を" << b << "に設定しました。\n";
    }
    else{
        y = 0;
        cout << b << "の値は不適切です。0に設定しました。\n";
    }
}


int main(){
    Point point1;
    int x, y;

    cout << "x座標を入力してください。\n";
    cin >> x;
    point1.setX(x);

    cout << "y座標を入力してください。\n";
    cin >> y;
    point1.setY(y);

    cout << "座標は(" << point1.getX() << ", " << point1.getY() << ")です。\n";

    return 0;
}
