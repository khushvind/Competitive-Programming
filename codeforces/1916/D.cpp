#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int solve() {
    int n; cin >> n;
    
    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }
    
    cout << 196 << string(n - 3, '0') << endl;
    for (int i = 0; i < n / 2; i++) {
        cout << 1 << string(i, '0') << 6 << string(i, '0') << 9 << string(n - 3 - 2 * i, '0') << endl;
        cout << 9 << string(i, '0') << 6 << string(i, '0') << 1 << string(n - 3 - 2 * i, '0') << endl;
    }
    return 0;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}


// void solve() {
//     int n;
//     std::cin >> n;
    
//     if (n == 1) {
//         std::cout << 1 << "\n";
//         return;
//     }
    
//     std::cout << 196 << std::string(n - 3, '0') << "\n";
//     for (int i = 0; i < n / 2; i++) {
//         std::cout << 1 << std::string(i, '0') << 6 << std::string(i, '0') << 9 << std::string(n - 3 - 2 * i, '0') << "\n";
//         std::cout << 9 << std::string(i, '0') << 6 << std::string(i, '0') << 1 << std::string(n - 3 - 2 * i, '0') << "\n";
//     }
// }

// int main() {
//     std::ios::sync_with_stdio(false);
//     std::cin.tie(nullptr);
    
//     int t;
//     std::cin >> t;
    
//     while (t--) {
//         solve();
//     }
    
//     return 0;
// }