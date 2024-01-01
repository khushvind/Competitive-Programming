#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    ll n; cin >> n;
    vector<ll> a(n);
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    ll ans = 0;
    vector<ll> b(n,0);
    ll last = 0;
    ll curr = last;
    for (int i = 1 ; i < n; i++){
        ll x = a[i-1], y = a[i];
        curr = last;
        if (x > y){
            while (x > y){
                curr++;
                y*= 2;
            }
        } else {
            while (x*2 <= y ){
                curr--;
                x*= 2;
            }
            curr = max(0LL,curr);
        }
        ans += curr;
        last = curr;
    }
    // for (auto x: b){
    //     cout << x << ' ';
    // }
    // cout << endl;
    
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