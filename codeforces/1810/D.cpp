#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)
void solve() {
    ll q;
    cin >> q;
    
    ll lo = 1, hi = 1E18;
    
    while (q--) {
        ll t;
        cin >> t;
        
        if (t == 1) {
            ll a, b, n;
            cin >> a >> b >> n;
            
            ll x, y;
            if (n == 1) {
                x = 1;
                y = a;
            } else {
                x = 1LL * a * (n - 1) - 1LL * b * (n - 2) + 1;
                y = 1LL * a * n - 1LL * b * (n - 1);
            }
            if (x <= hi && lo <= y) {
                lo = max(lo, x);
                hi = min(hi, y);
                cout << 1 << " ";
            } else {
                cout << 0 << " ";
            }
        } else {
            ll a, b;
            cin >> a >> b;
            
            ll t1 = lo <= a ? 1LL : (lo - b + a - b - 1) / (a - b);
            ll t2 = hi <= a ? 1LL : (hi - b + a - b - 1) / (a - b);
            
            if (t1 == t2) {
                cout << t1 << " ";
            } else {
                cout << -1 << " ";
            }
        }
    }
    cout << "\n";
}

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}