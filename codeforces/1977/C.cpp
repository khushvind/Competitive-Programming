#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

ll lcm(ll a, ll b){
    return ((a*b)/__gcd(a,b));
}

int solve(){
    ll n; cin >> n;
    vector<ll> a(n);
    for (ll i=0; i<n; i++) cin >> a[i];
    sort(a.begin(),a.end());
    ll l = 1;
    for (auto x : a) {
        if (a.back()%x) {
            cout << n << endl;
            return 0;
        }
    }
    
    map<ll, ll> count,f;
    for (auto x : a) count[x] += 1;
    ll ans = 0;
    f[1] = 0;
    for (auto x : count){
        auto g = f;
        ll i = x.first, c = x.second;
        for (auto y : f) g[lcm(y.first,i)] = max(g[lcm(y.first, i)], y.second + c);
        f.swap(g);
    }
    for (auto x : f) if (count.find(x.first) == count.end()) ans = max(ans,x.second);
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
