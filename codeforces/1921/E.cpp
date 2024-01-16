#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int h,w;
    vector<int> a(2),b(2);
    cin >> h >> w >> a[0] >> a[1] >> b[0] >> b[1];

    int y_diff = b[0] - a[0];
    if (y_diff <= 0) {
        cout << "Draw" << endl;
    } else if (y_diff%2){
        // cout << "HI" << endl;
        if (abs(a[1] - b[1]) <= 1){
            cout << "Alice" << endl;
        } else {
            int mov = (a[1] > b[1]? a[1] - 1 - 1 : w-a[1] - 1);
            if (a[0] + mov < b[0] - mov){
                cout << "Alice" << endl;
            } else {
                cout << "Draw" << endl;
            }
        } 
    } else {
        if (a[1] == b[1]){
            cout << "Bob" << endl;
        } else {
            int mov = (a[1] > b[1]? w-b[1]-1: b[1] - 1-1);
            if (a[0] + mov < b[0] - mov){
                cout << "Bob" << endl;
            } else {
                cout << "Draw" << endl;
            }  
        }
    }

    return 0;
}

int main(void){
    int times;
    cin >> times;
    while (times--) {
        solve();
    };
    return 0;
}