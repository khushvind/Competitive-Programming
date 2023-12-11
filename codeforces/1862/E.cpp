#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)
int mod = 1e9 + 7;
int inf  = 1e9 + 10;

int solve(){
    ll n,m,d; cin >> n >> m >> d;
    vector<ll> a(n);
    for (int i=0; i<n; i++){
        cin >> a[i];
    };
    priority_queue<ll , vector<ll> , greater<ll>> pq;
    ll ans = 0;
    ll curr = 0;
    
    for (int i = 0; i < n; i++){
        if (a[i] < 0) continue;
        if (pq.empty() || pq.size() < m){
            pq.push(a[i]);
            curr += a[i];
            ans = max(ans, curr - d*(i+1));
        } else if (pq.size() == m && pq.top() < a[i]){
            // cout << pq.top() << endl;
            curr += a[i] - pq.top();
            pq.pop();
            pq.push(a[i]);
            ans = ans = max(ans, curr - d*(i+1));
        }
        // cout << curr << " " << ans << endl;
    
        // cout << "HI" << endl;
        // return 0;
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