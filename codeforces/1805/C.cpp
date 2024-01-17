#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    ll n,m; cin >> n >> m;
    vector<ll> arr(n);
    for (int i = 0; i < n ; i++) cin >> arr[i];
    sort(arr.begin(),arr.end());
    int sz = unique(arr.begin(),arr.end()) - arr.begin();
    for (int i = 0; i < m; i++){
        ll a,b,c; cin >> a >> b >> c;
        if (c < 0) {
            cout << "NO" << endl;
            continue;
        }
        double l = b-sqrt(4*a*c), r = b+sqrt(4*a*c);
        // cout << l << " " << r << endl;
        int it = lower_bound(arr.begin(),arr.begin()+sz,r) - arr.begin();
        if (it != 0 && arr[it-1] > l && arr[it-1] < r){
            cout << "YES" << endl;
            cout << arr[it-1] << endl;
        } else {
            cout << "NO" << endl;
        }  
    }
    cout << endl;
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