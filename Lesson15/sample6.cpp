#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    vector<int> vt;
    for(int i = 0; i < 10; i++){
        vt.push_back(i);
    }

    cout << "並び替え前は";
    vector<int>::iterator it = vt.begin();
    while(it != vt.end()){
        cout << *it;
        it++;
    }
    cout << endl;

    cout << "逆順にすると";
    reverse(vt.begin(), vt.end());
    it = vt.begin();
    while(it != vt.end()){
        cout << *it;
        it++;
    }
    cout << endl;

    cout << "並び替え後は";
    sort(vt.begin(), vt.end());
    it = vt.begin();
    while(it != vt.end()){
        cout << *it;
        it++;
    }
    cout << endl;
}
