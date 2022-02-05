#include <iostream>
using namespace std;

// 誤ったコード
void add(int x, int y, int add_points);

// ポインタを用いた正しいコード
void p_add(int*x, int*y, int add_points);

// 参照を用いた正しいコード
void r_add(int& x, int& y, int add_points);


int main(){
    int a, b, add_points;

    cout << "2科目分の点数を入力してください。\n";
    cin >> a >> b;

    cout << "加算する点数を入力してください。\n";
    cin >> add_points;

    // add(a, b, add_points);
    // p_add(&a, &b, add_points);
    r_add(a, b, add_points);

    cout << add_points << "点加算しましたので\n";
    cout << "科目1は" << a << "点になりました。\n";
    cout << "科目2は" << b << "点になりました。\n";

    return 0;
}

// 誤ったコード
void add(int x, int y, int add_points){
    x += add_points;
    y += add_points;
}

// ポインタを用いた正しいコード
void p_add(int* px, int* py, int add_points){
    *px += add_points;
    *py += add_points;
}

// 参照を用いた正しいコード
void r_add(int& x, int& y, int add_points){
    x += add_points;
    y += add_points;
}
