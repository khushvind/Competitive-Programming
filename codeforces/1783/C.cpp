#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    auto b = a;
    sort(b.begin(), b.end());
    vector<int> sum(n + 1);
    for (int i = 0; i < n; i++) {
        sum[i + 1] = sum[i] + b[i];
    }
    
    int ans = n + 1;
    for (int x = 1; x <= n; x++) {
        int res = n - x;
        if (m >= sum[x]) {
            ans = min(ans, n - x + 1);
        }
        if (x < n && m >= sum[x] + max(a[x] - b[x - 1], 0)) {
            ans = min(ans, max(1, n - x));
        }
    }
    
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}