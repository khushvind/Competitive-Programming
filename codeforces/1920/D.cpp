#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    ll n,q; cin >> n >> q;
    vector<ll> lst_add(n+1);
    vector<ll> sz(n+1);
    for (int i = 1; i <= n; i++){
        ll b,x; cin >> b>> x;
        if (b == 1){
            sz[i] = sz[i-1]+1;
            lst_add[i] = x;
        } else {
            sz[i] = ((x + 1) > ((ll)1e18 +1LL)  / sz[i - 1]) ? (ll)2e18+1LL : sz[i - 1] * (x + 1);
            lst_add[i] = lst_add[i-1];
        }
    }
    while (q--){
        ll x; cin >> x;
        while (x > 0){
            ll it = lower_bound(sz.begin(),sz.end(), x) -sz.begin() ;
            if (it > sz.back()) {
                cout << "Found" << endl;
                return 0;
            }
            if (sz[it] == x) {
                cout << lst_add[it] << " " ;
                break;
            } else {
                x %= sz[it-1];
                if (x == 0) {
                    cout << lst_add[it-1] << " " ;
                    break;
                }
            }
        }
        
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