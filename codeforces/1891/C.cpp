#include <bits/stdc++.h>

using i64 = long long;

void solve() {
    int n;
    std::cin >> n;
    
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    
    std::sort(a.begin(), a.end());
    
    i64 sum = std::accumulate(a.begin(), a.end(), 0LL);
    i64 s = sum / 2;
    i64 ans = sum - s;
    for (int i = n - 1; i >= 0; i--) {
        if (s > 0) {
            s -= a[i];
            ans += 1;
        }
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