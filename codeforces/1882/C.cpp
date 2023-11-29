#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)
int mod = 1e9 + 7;
int inf  = 1e9 + 10;

int solve(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++){
        cin >> a[i];
    };
    vector<ll> dp(n,0);
    for (int i = n-2; i >= 0; i--){
        dp[i] = max(0,a[i+1]) + dp[i+1];
    }
    ll ans = 0;
    
    for (int i = 0; i < n; i++){
        // cout << 'HI' << endl;
        if (i%2){
            ans = max(ans, dp[i]);
        } else {
            ans = max(ans, a[i]+dp[i]);
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