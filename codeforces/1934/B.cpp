#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)
int M = 1e6;
vector<vector<ll>> dp(5, vector<ll> (M+1, 1e9));

int solve(){
    ll n ; cin >> n;
    ll ans = 0;
    while (n > 1e5){
        ll k = (n-1e5)/15 + 1;
        n -= k*15;
        ans+= k;
    }
    ans += dp[4][n];
    cout << ans << endl;
    return 0;
}

int main(void){
    ll times;
    cin >> times;
    vector<ll> coins = {1,3,6,10,15};
    for (int i = 0; i < M+1; i++) dp[0][i] = i;
    for (int j= 0; j < 5; j++) dp[j][0]= 0;
    for (int i = 1; i < M+1; i++){
        for (int j = 1; j < 5; j++) {
            if (i-coins[j] >= 0) dp[j][i] =min({dp[j][i] ,1LL + dp[j][i-coins[j]], dp[j-1][i]});
            else dp[j][i] = min({dp[j][i] , dp[j-1][i]});
        }
    }
    // for (auto x: dp){
    //     for (auto y : x){
    //         cout << y << ' ';
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    
    while (times--) {
        solve();
    }
    return 0;
}