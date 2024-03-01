#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    ll n; cin >> n;
    vector<ll> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    ll sum = accumulate(a.begin(),a.end(),0LL);
    if (sum%n) {
        cout << "NO" << endl;
        return 0;
    }
    ll mid = sum/n;
    map<ll,pair<ll,ll>> var;
    for (int i = 0; i < 35; i++){
        for (int j = 0; j < 35; j++){
            var[(1LL<<i) - (1LL<<j)] = {i,j};
        }
    }
    vector<int> cnt(35,0);
    for (int i = 0; i < n; i++){
        if (!var.count(a[i]-mid)){
            cout << "NO" << endl;
            return 0;
        }
        cnt[var[a[i]-mid].first]--;
        cnt[var[a[i]-mid].second]++;
    }
    for (int i = 0; i < 35; i++){
        if (cnt[i]!= 0){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
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