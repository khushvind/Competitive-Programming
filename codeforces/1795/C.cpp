#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    ll n; cin >> n;
    vector<ll> a(n),b(n);
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<n; i++) cin >> b[i];
    vector<ll> presum(n+1);
    presum[1] = b[0];
    for (int i = 0; i < n; i++){
        presum[i+1] = presum[i] + b[i];
    }
    vector<ll> ans(n),rem(n);
    for (int i = 0; i < n; i++){
        int it = upper_bound(presum.begin(),presum.end(), presum[i+1] - b[i] + a[i]) - presum.begin();
        // cout << i << " "  <<  it << endl;
        it--;
        if (it >= n) continue;
        // it--;
        ans[it]+= (a[i]- (presum[it]-presum[i]));
        // cout << i << " " << ans[i] << endl;
        rem[it]--;
    }
    // for (auto x: presum){
    //     cout << x << ' ';
    // }
    // cout << endl;
    // for (auto x: ans){
    //     cout << x << ' ';
    // }
    // cout << endl;
    // for (auto x: rem){
    //     cout << x << ' ';
    // }
    // cout << endl;
    ll s = 0;
    for (int i = 0; i < n ; i++){
        s+= 1 + rem[i];
        ans[i] += s*b[i];
    }
    for (auto x: ans){
        cout << x << ' ';
    }
    cout << endl;
    
    

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