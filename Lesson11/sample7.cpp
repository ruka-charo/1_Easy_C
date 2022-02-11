#include <iostream>
using namespace std;

// 共用体型の宣言
union Year{
    int ad;
    int gengo;
};


int main(){
    Year my_year;

    cout << "西暦を入力してください。\n";
    cin >> my_year.ad;

    cout << "西暦は" << my_year.ad << endl;
    cout << "元号は" << my_year.gengo << endl;

    cout << "元号を入力してください。\n";
    cin >> my_year.gengo;

    cout << "西暦は" << my_year.ad << endl;
    cout << "元号は" << my_year.gengo << endl;

    return 0;
}
