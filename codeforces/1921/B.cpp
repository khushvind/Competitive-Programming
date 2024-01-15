#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n; cin >> n;
    string s,f; cin >> s >> f;
    int s_n = 0,f_n = 0,dif1 = 0, dif2 = 0;
    for (auto x : s) if (x == '1') s_n++;
    for (auto x : f) if (x == '1') f_n++;
    for (int i = 0; i < n; i ++) dif1 += (s[i] == '1' && f[i] == '0');
    for (int i = 0; i < n; i ++) dif2 += (s[i] == '0' && f[i] == '1');
    if (s_n >= f_n){
        cout << (s_n - f_n + dif2) << endl;
    } else {
        cout << (dif1 + f_n-s_n) << endl;
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