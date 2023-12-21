#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n; cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        cin >> b[i];
    }
    vector<vector<int>> vec;
    for (int i = 0; i < n; i++){
        vec.push_back({a[i]+b[i], a[i], b[i]});
    }
    sort(vec.rbegin(),vec.rend());
    ll ans = 0;
    for (int i = 0 ; i < n; i++){
        // cout << vec[i][0] << " " << ans << endl;
        if (i%2){
            ans -= vec[i][2]-1;
        } else {
            ans += vec[i][1]-1;
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