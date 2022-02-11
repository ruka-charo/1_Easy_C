#include <iostream>
using namespace std;


// 列挙型Weekの宣言
enum Week{SUN, MON, TUE, WED, THU, FRI, SAT};

int main(){
    Week w;
    w = SUN;

    switch(w){
        case MON:
            cout << "月曜日です。\n";
            break;
        default:
            cout << "月曜日以外です。\n";
            break;
    }

    return 0;
}
