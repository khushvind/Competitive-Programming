#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

ll func(ll x){
    ll ans = ((x-1)*x)/2 + 1;
    return ans;
}

int solve(){
    ll n; cin >> n;
    ll l = 1, r = 10000;
    while (l < r){
        ll mid = (l+r+1)/2;
        if (func(mid) > n){
            r = mid-1;
        } else if (func(mid) <= n){
            l = mid;
        }
        if (func(l) <= n && func(l+1) >n){
            break;
        }
    }
    // cout << l << endl;
    // cout << func(l) << endl;
    ll x = l, y_l = n-func(x), y_r = n-func(x);
    ll ans = 0;
    for ( ; x >= 0; ){
        for (ll i = y_l + func(x);  i <= func(x)+ y_r; i++){
            ans += i*i;
        }
        x--;
        y_l = max(0LL, y_l-1);
        y_r = min(x-1, y_r);
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