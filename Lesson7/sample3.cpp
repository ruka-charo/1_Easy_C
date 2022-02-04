#include <iostream>
using namespace std;

void buy(int x, int y){
    cout << x << "万円の車を" << y << "台買いました。\n";
}

int main(){
    int x, y;

    cout << "いくらの車を何台買いますか？\n";
    cin >> x >> y;

    buy(x, y);

    return 0;
}
