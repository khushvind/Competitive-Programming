#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)
int mod = 1e9 + 7;
int inf  = 1e9 + 10;

void solve() {
    int n, m;
    string s;
    cin >> n >> m >> s;
    
    vector<int> lf(n), rg(n);
    lf[0] = -1;
    for (int i = 0; i < n; ++i) {
        if (i > 0) lf[i] = lf[i - 1];
        if (s[i] == '0') lf[i] = i;
    }
    rg[n - 1] = n;
    for (int i = n - 1; i >= 0; --i) {
        if (i + 1 < n) rg[i] = rg[i + 1];
        if (s[i] == '1') rg[i] = i;
    }
    
    set<pair<int, int>> st;
    for (int i = 0; i < m; ++i) {
        int l, r;
        cin >> l >> r;
        int ll = rg[l - 1], rr = lf[r - 1];
        if (ll > rr) {
            st.insert({-1, -1});
        } else {
            st.insert({ll, rr});
        }
    }
    
    cout << st.size() << endl;
}

int main(void){
    int times;
    cin >> times;
    while (times--) {
        solve();
    };
    return 0;
}