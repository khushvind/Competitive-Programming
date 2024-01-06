#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n ; cin>> n;
    string s; cin >> s;
    int x = 0, y = 0;
    for (auto t : s){
        if (t=='+'){
            x++;
        } else {
            y++;
        }
    }
    cout << abs(x-y) << endl;

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