#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    ll k,x,a; cin >> k >> x >> a;
    vector<ll> b(x),dp(x);
    b[0] = 1; dp[0] = 1;
    for (int i = 1; i < x; i++){
        b[i] = (dp[i-1])/(k-1)+1;
        dp[i] = dp[i-1]+b[i];
        if (dp[i] >= a){
            cout << "NO"<< endl;
            return 0;
        }
    }
    // for (auto x: b){
    //     cout << x << ' ';
    // }
    // cout << endl;
    // for (auto x: dp){
    //     cout << x << ' ';
    // }
    // cout << endl;
    if ((a-dp.back())*(k-1) > dp.back()){
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