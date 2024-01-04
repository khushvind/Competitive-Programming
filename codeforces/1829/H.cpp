#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)
int mod = 1e9+7;

int solve(){
    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<ll> dp(64);
    for (auto x : a){
        for (int i = 0; i < 64; i++){
            dp[i&x] = (dp[i&x] + dp[i])%mod;
            
        }
        dp[x]++;
        dp[x] %= mod;
    }
    // for (auto x: dp){
    //     cout << x << ' ';
    // }
    // cout << endl;
    
    ll ans= 0;
    for (int x = 0; x < 64; x++){
        int s = 0;
        for (int i = 0; i < 6; i++){
            if (x&(1<<i)) s++;
        }
        if (s == k){
            // cout << "x " << x << endl;
            ans += dp[x];
            ans %= mod;
        }
    }
    cout << ans << endl;

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