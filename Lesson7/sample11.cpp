#include <iostream>
using namespace std;

// max関数の宣言
int max(int x, int y);
double max(double x, double y);
void max();

int main()
{
    int a, b, ans1;
    double da, db, ans2;

    cout << "2つの整数を入力してください。\n";
    cin >> a >> b;

    ans1 = max(a, b);
    cout << "2つのうち大きいのは" << ans1 << "です。\n";

    cout << "2つの実数を入力してください。\n";
    cin >> da >> db;

    ans2 = max(da, db);
    cout << "2つのうち大きいのは" << ans2 << "です。\n";

    max();

    return 0;
}


int max(int x, int y){
    if (x < y)
        return y;
    else
        return x;
}

double max(double x, double y){
    if (x < y)
        return y;
    else
        return x;
}

void max(){
    cout << "試し。\n";
}
