#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)
int mod = 1e9 + 7;
int inf  = 1e9 + 10;

int solve(){
    int n,m; cin >> n >> m;
    n%= m;
    if (!n){
        cout << 0 << endl;
        return 0;
    }
    bool ok = false;
    for (int i = 0; i < 30; i++) {
        if ((n * (1LL << i)) % m == 0) {
            ok = true;
            break;
        }
    }
    if (!ok) {
        cout << "-1" << endl;
        return 0;
    }
 
    ll N = n;
    ll ans = 0;
    while (n) {
        ans += n;
        if ((2 * n) >= m) {
            n = (2 * n) - m;
        } else {
            n *= 2;
        }   
    }
 
    cout << ans << endl;
    return 0;
}
 

int main(void){
    int times;
    cin >> times;
    while (times--) {
        solve();
    };
    return 0;
}