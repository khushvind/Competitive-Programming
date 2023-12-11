#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)
int mod = 1e9 + 7;
int inf  = 1e9 + 10;

int solve(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    sort(a.begin(),a.end());
    unordered_map<int,int> cnt;
    for (auto x : a) cnt[x]++;

    if (cnt[0] == 0){
        cout << 0 << endl;
        return 0;
    }

    int MEX = cnt.size(), len = cnt.size();

    unique(a.begin(),a.end());
    for (int i =0; i < cnt.size(); i++){
        if (cnt[a[i]+1] == 0) {
            MEX = a[i]+1;
            len = i+1;
            break;
        }
    }
    // for (auto x: cnt){
    //     cout << x << ' ';
    // }
    // cout << endl;
    
    vector<int> dp(len);
    dp[len-1] = INT_MAX;
    for (int i = len -1; i >= 0; i--){
        dp[i] = (cnt[a[i]]-1)*MEX;
        for (int j = i; j < MEX; j++){
            dp[i] = min(dp[i],dp[j] + cnt[a[i]]*j);
        }
    }
    cout << dp[0] << endl;
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