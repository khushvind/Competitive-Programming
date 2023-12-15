#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)
int mod = 1e9 + 7;
int inf  = 1e9 + 10;

int solve(){
    ll n; cin >> n;
    // vector<pair<int,int>> a(n);
    map<ll,ll> mp1;
    map<ll,ll> mp2;
    map<ll,ll> mp3;
    map<ll,ll> mp4;
    for (int i = 0; i < n; i++){
        // cin >> a[i].first >> a[i].second ;
        int x,y; cin >> x >> y;
        mp1[x]++; mp2[y]++;
        mp3[x-y]++; mp4[x+y]++;
    } 
    ll ans = 0;
    for (auto x : mp1) ans += x.second*(x.second-1);
    for (auto x : mp2) ans += x.second*(x.second-1);
    for (auto x : mp3) ans += x.second*(x.second-1);
    for (auto x : mp4) ans += x.second*(x.second-1);
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