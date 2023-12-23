#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    ll n, q; cin >> n >> q;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++){
        cin >> arr[i] ;
    }
    
    while (q--){
        vector<ll> a(arr);
        ll x; cin >> x;
        ll ans = 0;
        for (ll j = 60; j>= 0; j--){
            ll temp = 0;
            for (ll i = 0; i < n && temp >= 0 && temp<= x; i++){
                ll t1 = a[i]%(1LL<<j);
                if ((a[i]&(1LL<<j))==0){
                    temp += (1LL<<j) - t1;
                }
            }
            if (temp <= x){
                ans += (1LL<<j);
                x -= temp;
                for (ll i = 0; i < n; i++){
                    if ((a[i]&(1LL<<j))==0){
                        a[i] += (1LL<<j) - a[i]%(1LL<<j);
                    }
                }
            }
        }   
        cout << ans << endl;
    }
    return 0;
}

int main(void){
    solve();
    return 0;
}