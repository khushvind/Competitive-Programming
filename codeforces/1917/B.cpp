#include <bits/stdc++.h>

using i64 = long long;

void solve() {
    int n;
    std::cin >> n;
    
    std::string s;
    std::cin >> s;
    
    std::array<int, 26> cnt{};
    int dist = 0;
    int ans = 0;
    for (auto c : s) {
        if (cnt[c-'a'] == 0) {
            cnt[c-'a']++;
            dist++;
        }
        ans += dist;
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