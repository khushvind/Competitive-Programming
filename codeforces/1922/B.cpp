#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    ll n; cin >> n;
    vector<ll> a(n);
    map<ll,ll> mp;
    map<ll,ll> mp2;
    for (int i=0; i<n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    ll ans = 0;
    ll curr = 0;
    for (auto it : mp){
        ll x = it.first, y = it.second;
        mp2[x] = curr;
        curr += y;
    }
    for (auto it : mp){
        ll x = it.first, y = it.second;
        // cout << x << " " << y << endl;
        ans += (y*(y-1)*(y-2))/6;
        ans += mp2[x]*((mp[x])*(mp[x]-1))/2;
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