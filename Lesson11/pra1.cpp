#include <iostream>
using namespace std;

// 構造体型の宣言
struct Person{
    int age;
    double weight;
    double height;
};


int main(){
    Person person1, person2;

    // person1
    cout << "年齢を入力してください。\n";
    cin >> person1.age;

    cout << "体重を入力してください。\n";
    cin >> person1.weight;

    cout << "身長を入力してください。\n";
    cin >> person1.height;

    // person2
    cout << "年齢を入力してください。\n";
    cin >> person2.age;

    cout << "体重を入力してください。\n";
    cin >> person2.weight;

    cout << "身長を入力してください。\n";
    cin >> person2.height;

    // 出力
    cout << "Person1は" << "年齢" << person1.age << "体重" << person1.weight << "身長" << person1.height << endl;
    cout << "Person2は" << "年齢" << person2.age << "体重" << person2.weight << "身長" << person2.height << endl;
}
