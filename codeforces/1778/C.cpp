#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    ll n,k; cin >> n >> k;
    string a,b; cin >> a >> b;
    vector<ll> unq(26);
    for (auto x : a) unq[x-'a']++;
    ll cnt = 0;
    for (int i = 0; i < 26; i++){
        if (unq[i] > 0){
            unq[i] = cnt++;
            // cnt++;
        } else {
            unq[i] = -1;
        }
    }
    k = min(cnt,k);
    ll ans = 0;
    for (ll mask = 0; mask < (1 << cnt); mask++){
        if (__builtin_popcount(mask) != k) continue;
        ll res = 0;
        ll j = -1;
        for (ll i = 0; i <= n; i++){
            if (i == n || (a[i] != b[i] && ((~mask >> unq[a[i]-'a']) & 1))){
                res += ((i-j)*(i-j-1))/2;
                j = i;
            }
        }
        ans = max(ans,res);
    }
    cout << ans << endl;

    return 0;
}

// }


int main(void){
    int times;
    cin >> times;
    while (times--) {
        solve();
    };
    return 0;
}







