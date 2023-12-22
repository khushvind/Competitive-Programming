#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &it : a) cin >> it;
    
    vector<int> pref(n), suf(n);
    for (int i = 0; i < n; ++i) {
        pref[i] = a[i] + (n - i - 1);
        suf[i] = a[i] + i;
    }
    for (int i = 1; i < n; ++i) {
        pref[i] = max(pref[i], pref[i - 1]);
    }
    for (int i = n - 2; i >= 0; --i) {
        suf[i] = max(suf[i], suf[i + 1]);
    }
    
    int ans = INT_MAX;
    for (int i = 0; i < n; ++i) {
        int cur = a[i];
        if (i > 0) cur = max(cur, pref[i - 1]);
        if (i + 1 < n) cur = max(cur, suf[i + 1]);
        ans = min(ans, cur);
    }
    
    cout << ans << endl;
    return 0;
}

int main(void){
    solve();
    return 0;
}