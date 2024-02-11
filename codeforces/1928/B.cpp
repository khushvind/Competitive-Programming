#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    sort(a.begin(),a.end());
    a.erase(unique(a.begin(), a.end()), a.end());
    int idx = lower_bound(a.begin(),a.end(),a[0]+n-1) - a.begin();
    int ans = 0;
    if (idx == a.size()) {
        ans = a.size();
    } else if (a[idx] <= a[0]+n-1) {
        ans = (idx+1);
    } else {
        ans = (idx);
    }
    // cout << "a.size =" << a.size() << endl;
    int sz = a.size();
    for (int i = 0; i < sz; i++){
        int idx = lower_bound(a.begin(),a.end(),a[i]+n-1) - a.begin();
        // cout << "idx " << i << " " << idx << endl;
        // cout << "ans " << ans << endl;
        // continue;;
        if (idx >= sz) {
            ans = max(ans, int(a.size()-i));
            break;
        } else if (a[idx] <= a[i]+n-1) {
            ans = max(ans,idx-i+1);
        } else {
            ans = max(ans,idx-i);
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