#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    ll n,f,a,b; cin >> n >> f >> a >> b;
    vector<ll> arr(n+1);
    for (int i=0; i<n; i++) cin >> arr[i+1];
    vector<ll> dp(n+1);
    for (int i = 0; i < n; i++){
        dp[i+1] = min((arr[i+1]-arr[i])*a + dp[i],(dp[i] + b));
    }

    // for (auto x: dp){
    //     cout << x << ' ';
    // }
    // cout << endl;
    

    if (f > dp.back()) cout << "YES" << endl;
    else cout << "NO" << endl;
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