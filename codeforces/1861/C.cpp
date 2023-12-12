#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

void solve() {
    string s;
    cin >> s;

    int n = s.size();
    int sz = 0;
    int good = 1;
    int bad = 1e9;
    for (int i = 0; i < n; i++) {
        if (s[i] == '+') {
            good = max(1, min(good, sz));
            sz++;
        } else if (s[i] == '-') {
            sz--;
            if (sz < bad) {
                bad = 1e9;
            }
        } else if (s[i] == '1') {
            if (bad <= sz) {
                cout << "NO" << endl;
                return;
            }
            good = max(1, sz);
        } else if (s[i] == '0') {
            if (good >= sz) {
                cout << "NO" << endl;
                return;
            }
            bad = min(bad, sz);
        }
    }
    cout << "YES" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t =  1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

