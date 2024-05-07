#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

ll calc(ll u,ll k){
    return (k*u - ((k-1)*k)/2);
}
 
int solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<ll> s(n + 1);
    for (int i = 0; i < n; i++) s[i + 1] = s[i] + a[i];
    ll q; cin >> q;
    while (q--) {
        ll l, u;
        std::cin >> l >> u;
        l--;
        int j = lower_bound(s.begin() + l + 1, s.end(), s[l] + u) - s.begin();
        ll ans = -1E18;
        ll r = -1;
        if (j <= n) {
            if (calc(u, s[j] - s[l]) > ans) {
                ans = calc(u, s[j] - s[l]);
                r = j;
            }
        }
        if (j - 1 > l) {
            if (calc(u, s[j - 1] - s[l]) >= ans) {
                ans = calc(u, s[j - 1] - s[l]);
                r = j - 1;
            }
        }
        cout << r << " ";
    }
    cout << endl;
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