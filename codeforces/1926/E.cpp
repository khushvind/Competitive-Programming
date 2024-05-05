#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    ll n,k;cin >> n >> k;
    // cout << n << " " << k << endl;
    for (ll i = 1; i < 64 ; i++){
        if ((n+(1LL<<(i-1)))/(1LL<<i) < k){
            k -= (n+(1LL<<(i-1)))/(1LL<<i);
        } else {
            cout << (1LL<<(i-1))*(2*k-1) << endl;
            return 0;
        }
        // cout << (1<<(i-1))*(2*k-1) << endl;
    }
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