#include <iostream>
using namespace std;


int main(){
    int num;
    cout << "1〜9までの数を入力してください。\n";
    cin >> num;

    try{
        if(num <= 0){
            throw "0以下を入力しました。";
        }
        if(num >= 10){
            throw num;
        }
        cout << num << endl;
    }

    catch(const char* err){
        cout << "エラー : " << err << endl;
        return 1;
    }

    catch(const int err){
        cout << "エラー2 : " << err << endl;
        return 1;
    }

    return 0;
}
