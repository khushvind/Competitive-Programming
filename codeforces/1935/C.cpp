#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    ll n,L; cin >> n >> L;
    vector<pair<int,int>> a(n);
    for (int i = 0; i < n; i ++) cin >> a[i].second >> a[i].first;
    sort(a.begin(),a.end());
    int ans = 0;
    for (int l = 0 ; l < n ; l++) {
        multiset<int> s;
        int cur = 0;
        for (int r = l ; r < n ; r++) {
            s.insert(a[r].second);
            cur += a[r].second;
            while (!s.empty() && a[r].first - a[l].first + cur > L) {
                int max_value = *s.rbegin();
                cur -= max_value;
                auto it = s.find(max_value);
                s.erase(it);
            }
            ans = std::max(ans, (int) s.size());
        }
    }
    cout << ans << endl;;
    return 0;
}

int main(void){
    int times;
    cin >> times;
    while (times--) {
        solve();
    }
    return 0;
}