#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    ll n; cin >> n;
    vector<ll> a(n);
    ll s = 0;
    for (int i=0; i<n; i++) {
        cin >> a[i];
        s+= a[i];
    }
    s /= n;
    ll rem = 0;
    for (int i = 0; i < n; i++){
        rem += a[i] - s;
        if (rem < 0) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
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