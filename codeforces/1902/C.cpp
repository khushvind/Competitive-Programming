#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

void solve() {
    ll n; cin >> n;
    ll mx = LLONG_MIN;
    set<ll> s;
    vector<ll> a(n); for (auto& e: a) cin >> e, mx = max(mx, e), s.emplace(e);
    ll g = -1;
    for (ll i = 0; i < n - 1; ++i) {
        if (g == -1) g = abs(a[i + 1] - a[i]);
        else g = __gcd(g, abs(a[i + 1] - a[i]));
    }
    ll ans = 0;
    
    for (auto e: a) ans += (mx - e) / g;
    for (ll t = mx; t >= -LLONG_MAX; t -= g) {
        if (s.find(t) == s.end()) {
            ans += (mx - t) / g;
            break;
        }
    }
    cout << ans << '\n';
 
}

int main(void){
    int times;
    cin >> times;
    while (times--) {
        solve();
    };
    return 0;
}