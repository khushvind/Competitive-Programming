#include <bits/stdc++.h>

using i64 = long long;

void solve() {
    int n, m;
    std::cin >> n >> m;
    
    std::vector<int> l(m), r(m);
    for (int i = 0; i < m; i++) {
        std::cin >> l[i] >> r[i];
        l[i]--;
    }
    
    int q;
    std::cin >> q;
    
    std::vector<int> x(q);
    for (int i = 0; i < q; i++) {
        std::cin >> x[i];
        x[i]--;
    }
    
    int lo = 0, hi = q + 1;
    while (lo < hi) {
        int t = (lo + hi) / 2;
        
        std::vector<int> s(n + 1);
        for (int i = 0; i < t; i++) {
            s[x[i] + 1] = 1;
        }
        for (int i = 1; i <= n; i++) {
            s[i] += s[i - 1];
        }
        
        bool ok = false;
        for (int i = 0; i < m; i++) {
            if (s[r[i]] - s[l[i]] > (r[i] - l[i]) / 2) {
                ok = true;
            }
        }
        if (ok) {
            hi = t;
        } else {
            lo = t + 1;
        }
    }
    int ans = lo;
    if (ans > q) {
        ans = -1;
    }
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
