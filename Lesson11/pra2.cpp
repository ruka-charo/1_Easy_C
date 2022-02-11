#include <iostream>
using namespace std;

// 構造体型の宣言
struct Person{
    int age;
    float weight;
    float height;
};

// 関数の宣言
void aging(Person* pA);


int main(){
    Person person1;

    cout << "年齢、体重、身長を入力してください。\n";
    cin >> person1.age >> person1.weight >> person1.height;

    cout << "年齢" << person1.age << "体重" << person1.weight << "身長" << person1.height << endl;

    cout << "年齢を1増加させます。\n";

    aging(&person1);

    cout << "年齢" << person1.age << "体重" << person1.weight << "身長" << person1.height << endl;

    return 0;
}



// 年齢を1増やす関数
void aging(Person* pA){
    pA->age += 1;
}
