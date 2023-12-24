#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n; cin >> n;
    string s; cin >> s;
    if (n == 1){
        cout << ((s[0] == '0')? "YES": "NO") << endl;
        return 0;
    }
    bool a = false, b = false;
    for (auto x : s){
        if (x == '0'){
            a = true;
        } else if (x == '1'){
            b = true;
        }
    }
    if (a) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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