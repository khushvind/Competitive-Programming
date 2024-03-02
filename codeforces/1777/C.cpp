#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

const ll inf = LONG_LONG_MAX;
const ll MAXM = 1e5;
vector<ll> factors[MAXM + 5];

void init(){
    for (ll i = 1; i <= MAXM; i++)
    {
        for (ll j = i; j <= MAXM; j += i)
        {
            factors[j].push_back(i);
        }
    }
}



int solve(){
    ll n,m; cin >> n>> m;
    vector<ll> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    sort(a.begin(),a.end());
    ll ans = inf,curr = 0;
    set<int> found;
    vector<ll> cnt(m+1);
    ll j = 0;
    for (int i = 0; i < n; i++){
        for (auto x : factors[a[i]]){
            if (x > m) break;
            cnt[x]++;
            found.insert(x);
        }
        while (found.size() == m){
            ans = min(ans,a[i]-a[j]);
            for (auto x : factors[a[j]]){
                if (x > m) break;
                cnt[x]--;
                if (cnt[x] == 0) found.erase(x);
            }
            j++;
        }
    }
    if (ans == inf){
        cout << -1 << endl;
    } else {
        cout << ans << endl;
    }


    return 0;
}

int main(void){
    int times;
    cin >> times;
    init();
    while (times--) {
        solve();
    }
    return 0;
}