#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    ll n,x,y; cin >> n >> x >> y;
    vector<ll> a(x), odd,even;
    for (int i = 0; i < x; i++) {
        cin >> a[i]; a[i]--;
    }
    
    sort(a.begin(),a.end());
    a.push_back(n+a[0]);
    ll ans = x-2;
    for (int i = 1; i < x+1; i++){
        ll diff = a[i]-a[i-1]-1;
        // cout << diff << " " ;
        if (diff%2) {
            if (diff == 1) ans ++; 
            else odd.push_back(diff);
        } else {
            if (diff > 0) even.push_back(diff);
        }
    }
    // cout << endl;
    // for (auto x: odd){
    //     cout << x << ' ';
    // }
    // cout << endl;
    // for (auto x: even){
    //     cout << x << ' ';
    // }
    // cout << endl;
    
    sort(odd.begin(),odd.end()); sort(even.begin(),even.end());
    int i = 0, j = 0;
    for ( ; i < odd.size() && y>0; i++){
        ll k = odd[i]/2;
        if (y >= k){
            ans += 2*k+1;
            y -= k;
        } else break;
    }
    for ( ; j < even.size() && y>0; j++){
        ll k = even[j]/2;
        if (y>= k){
            ans += 2*k;
            y -= k;
        } else break;
    }
    if (i < odd.size() && y > 0){
        ans+= 2*y;
        y = 0;
    }
    if (j < even.size() && y > 0){
        ans+= 2*y;
        y = 0;
    }
    cout << ans << endl;

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