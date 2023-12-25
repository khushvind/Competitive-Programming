#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    ll n, k,d; cin >> n >> k >> d;
    vector<ll> a(n);
    vector<ll> b(k);
    for (int i =0; i < n; i++) cin >> a[i];
    for (int i = 0; i < k; i++) cin >> b[i];
    ll ans = 0;
    for (int i = 0; i < min(4000LL,d); i++){
        ll cnt = 0;
        for (int j = 0; j < n; j++){
            if (a[j] == j+1){
                cnt++;
            }
            if (j < b[i%k]) a[j]++;
            ans = max(ans,cnt + (d-i-1)/2);
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