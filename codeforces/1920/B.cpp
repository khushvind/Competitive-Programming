#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n,k,x; cin >> n >> k >> x;
    vector<int> a(n);
    for (int i =0; i < n; i++) cin >> a[i];
    sort(a.rbegin(),a.rend());
    int ans = INT_MIN;
    int k_ = k;
    priority_queue<int> pq;
    int curr = accumulate(a.begin(),a.end(),0);
    for (int i =0; i < min(x+k,n); i++){
        if (pq.empty() || pq.size() < x || i < x){
            pq.push(a[i]);
            curr -= a[i]*2;
        } else {
            curr += pq.top();
            pq.pop();
            pq.push(a[i]);
            curr -= a[i]*2;
        }
        if (pq.size() == x) ans = max(ans,curr);
    }

    // cout << "ans " << ans << endl;
    // ans = max(ans,curr);

    int ans1 = INT_MIN;
    int ans2 = accumulate(a.begin(),a.end(),0);
    if (n == k) ans1 = 0;
    for (int i = 0; i < min(k,n); i++) ans2 -= a[i];
    // cout << "ans = " << ans2 << endl;
    for (int i = min(k,n); i < min(n,x+k); i++) ans2 -= 2*a[i];
    // cout << "ans = " << ans2 << endl;
    // for (int i = min(n,x+k); i < n; i++) ans2 += a[i];
    // cout << "ans = " << ans2 << endl;


    cout << max({ans,ans1,ans2}) << endl;
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