#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    ll n,m,k; cin >> n >> m >> k;
    // cout << n << " " << m << " " << k << endl;
    vector<ll> a(n),d(m),f(k);
    for (int i = 0; i < n ; i++) cin >> a[i];
    for (int i = 0; i < m ; i++) cin >> d[i];
    for (int i = 0; i < k ; i++) cin >> f[i];
    ll cnt = 0, l =0, r=0, x = 0,y = 0;
    
    for (int i = 1; i < n; i++){
        if (a[i]-a[i-1] > r-l) {
            r = a[i]; l = a[i-1];
            y = x;
            x = r-l;
            cnt = 1;
        } else if (a[i]-a[i-1] == r-l){
            y = x;
            cnt++;
        } else if (a[i]-a[i-1] > y){
            y = a[i]-a[i-1];
        }
    }
    sort(d.begin(),d.end());
    sort(f.begin(),f.end());
    if (cnt >1) {
        cout << (r-l) << endl;
    } else {
        ll ans = r-l;
        for (int i = 0; i < m; i++){
            int id = lower_bound(f.begin(),f.end(), (l+r)/2-d[i])-f.begin();
            // cout << i << " " << id << endl;
            for (int j = id-1; j<= id+1; j++){
                if (j < k && j >= 0 && d[i]+f[j] <= r && d[i]+f[j] >= l) ans = min(ans,max({d[i]+f[j] - l, r-(d[i]+f[j]),y}));
            }
        }
        cout << ans << endl;
    }

    return 0;
}

int main(void){
    int times;
    cin >> times;
    while (times--) {
        solve();
    }
    return 0;
}