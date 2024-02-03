#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    ll a,b,r; cin >> a >> b >> r;
    if (a < b) swap(a,b);
    // cout << a << " " << b << endl;
    ll curr = 0;
    ll ans = 0;
    for (ll i = 60; i >= 0; i--){
        if ((a & (1LL<<i)) == (b & (1LL<<i))){
            continue;
        } else if ((a & (1LL<<i)) && curr + (1LL<<i) <= r && ans > 0){
            curr += (1LL<<i);
            ans -= (1LL<<i);
            // cout << curr << " a "<<endl;
        } else if (a & (1LL<<i)){
            ans += (1LL<<i);
        } else {
            ans -= (1LL<<i);
            // cout << curr << " b "<< endl;
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