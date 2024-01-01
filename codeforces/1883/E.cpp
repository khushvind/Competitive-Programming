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
        b[i] = b[i-1];
        if (x > y){
            while (x > y){
                b[i]++;
                y*= 2;
            }
        } else {
            while (x*2 <= y ){
                b[i]--;
                x*= 2;
            }
            b[i] = max(0LL,b[i]);
        }
        ans += b[i];
    }
    // for (auto x: b){
    //     cout << x << ' ';
    // }
    // cout << endl;
    
    cout << accumulate(b.begin(),b.end(),0LL) << endl;
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