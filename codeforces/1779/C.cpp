#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    ll n,m; cin >> n >> m;
    vector<ll> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    priority_queue<ll, vector<ll>, greater<ll>> pq1;
    priority_queue<ll> pq2;
    ll ans = 0;
    ll s = 0;
    for (int i = m; i < n; i++){
        pq1.push(a[i]);
        s+= a[i];
        if (s < 0){
            s -= 2*pq1.top();
            pq1.pop();
            ans++;
        }
    }
    s = 0;
    for (int i = m-1; i > 0; i--){
        pq2.push(a[i]);
        s+= a[i];
        if (s > 0){
            s -= 2*pq2.top();
            pq2.pop();
            ans++;
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