#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    ll n; cin >> n;
    vector<ll> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    vector<ll> pre(n+2), suf(n+2);
    pre[2] = 1;
    for (int i = 2; i < n; i++){
        if (a[i] - a[i-1] < a[i-1]-a[i-2]){
            pre[i+1] = pre[i]+1;
        } else {
            pre[i+1] = pre[i] + a[i] - a[i-1];
        }
    }
    suf[n-1] = 1;
    for (int i = n-3; i >= 0; i--){
        if (a[i+1] - a[i] < a[i+2] - a[i+1]){
            suf[i+1] = suf[i+2]+1;
        } else {
            suf[i+1] = suf[i+2] +a[i+1] - a[i];
        }
    }

    // for (auto x: pre){
    //     cout << x << ' ';
    // }
    // cout << endl;
    // for (auto x: suf){
    //     cout << x << ' ';
    // }
    // cout << endl;
    
    ll m; cin >> m;
    while (m--){
        ll x,y ; cin >> x >> y;
        if (x < y){
            ll ans = (pre[y] - pre[x]);
            cout << ans << endl;
        } else if (x > y){
            ll ans = (suf[y] - suf[x]);
            cout << ans << endl;;
        } else {
            cout << 0 << endl;
        }
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