#include <iostream>
using namespace std;

int main()
{
    // 人数の指定
    const int num = 5;
    int test[num];

    cout << "人の点数を入力してください。\n";
    for (int i=0; i<num; i++){
        cin >> test[i];
    }

    // 配列をソートする(降順)
    // if (test[s] > test[t])←昇順
    for (int s=0; s<num-1; s++){
        for (int t=s+1; t<num; t++){
            if (test[s] < test[t]){
                int tmp = test[t];
                test[t] = test[s];
                test[s] = tmp;
            }
        }
    }

    cout << num << "人の点数を出力します。\n";
    for (int i=0; i<num; i++){
        cout << i+1 << "人目の点数は" << test[i] << "点です。\n";
    }

    // 配列からそのまま出力できる
    for (int i: test){
        cout << i << "\n";
    }

    return 0;
}
