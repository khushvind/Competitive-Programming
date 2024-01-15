#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    ll n,m; cin >> n >> m;
    vector<ll> a(n);
    vector<ll> b(m);
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<m; i++) cin >> b[i];
    sort(a.rbegin(),a.rend());
    sort(b.begin(),b.end());

    // for (auto x: a){
    //     cout << x << ' ';
    // }
    // cout << endl;
    // for (auto x: b){
    //     cout << x << ' ';
    // }
    // cout << endl;
    

    ll sum = 0, ans = 0, diff = m-n;

    for (int i = diff; i < m; i++){
        sum += abs(b[i] - a[i-diff]);
    }
    // cout << "sum " << sum << endl;
    ans = sum;
    for (int i = 0, j = diff; j < m; j++,i++){
        sum += abs(b[i] - a[i]) - abs(b[j] - a[i]) ;
        // cout << sum << endl;
        ans = max(ans, sum);
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