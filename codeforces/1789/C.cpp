#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    ll n,m;cin >> n >> m;
    vector<ll> a(n);
    vector<ll> occur(m+n+1,-1),cnt(n+m+1);
    for (int i = 0; i < n ;i++) {
        cin >> a[i];
        occur[a[i]] = 0;
    }
    for (int j = 0; j < m; j++){
        int p,v; cin >> p >> v;
        p--;
        cnt[a[p]]+= j+1-occur[a[p]];
        occur[a[p]] = -1;
        occur[v] = j+1;
        a[p] = v;
    }
    for (int i = 1; i <= m+n; i++){
        int x = occur[i];
        if (x != -1){
            cnt[i]+= m+1-x;
        }
    }
    ll sum = 0;
    for (int i = 1; i <= m+n; i++) {
        sum += (m*(m+1))/2 - ((m-cnt[i])*(m-cnt[i]+1))/2;
    }
    cout << sum << endl;
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