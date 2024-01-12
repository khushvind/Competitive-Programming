#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k;
    cin >> n >> k;
    
    int x = 0;
    while ((x + 1) * (x + 2) / 2 <= k) {
        x += 1;
    }
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        if (i < x) {
            a[i] = 2;
        } else if (i == x) {
            a[i] = -2 * x - 1 + 2 * (k - x * (x + 1) / 2);
        } else {
            a[i] = -1000;
        }
        cout << a[i] << " \n"[i == n - 1];
    }
}

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}