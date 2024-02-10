#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    vector<int> dp(n,-1);
    for (int i = 1; i < n; i++){
        if (a[i] != a[i-1]){
            dp[i] = i-1;
        } else {
            dp[i] = dp[i-1];
        }
    }
    int q; cin >> q;
    while (q--){
        int l,r; cin >> l >> r;
        l--;r--;
        if (dp[r] < l || dp[r] == -1) cout << -1 << " " << -1 << endl;
        else cout << r+1 << " " << dp[r]+1 << endl;
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