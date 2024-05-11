#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll calc_min_cost(vector<ll>& a, ll d){
    ll m = a.size();
    vector<ll> dp(m,INT64_MAX);
    multiset<long long> mst = {1};
    dp[0] = 1;
    for (ll i = 1; i < m; i++){
        dp[i] = *mst.begin() + a[i] + 1;
        if (i - d - 1 >= 0) mst.erase(mst.find((dp[i - d - 1])));
        mst.insert(dp[i]);
        // for (ll j = max(i-d-1LL,0LL); j < i; j++){
        //     dp[i] = min(dp[j]+a[i]+1,dp[i]);
        // }
    }
    return dp.back();
}

int solve(){
    ll n,m,k,d; cin >> n >> m >> k >> d;
    vector<ll> a(m),cost(n);
    ll sum = 0, ans = 0;;
    for (int j = 0; j < n ; j++){
        for (int i = 0; i < m; i++) cin >> a[i];
        cost[j] = calc_min_cost(a,d);
    }
    // for (auto x: cost){
    //     cout << x << ' ';
    // }
    // cout << endl;
    
    ans = sum = accumulate(cost.begin(),cost.begin()+k,0LL);
    // cout << ans << endl;
    for (int i = k; i < n; i++){
        sum += cost[i]-cost[i-k];
        ans = min(ans,sum);
    }
    cout << ans << endl;
    return 0;
}

int main(void){
    int times;
    cin >> times;
    while (times--) {
        solve();
    }
    return 0;
}