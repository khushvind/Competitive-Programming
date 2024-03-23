#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)
int mod = 1000000007;

ll power(int n, int m) {
    if (m == 0){
        return 1;
    } else if (m%2 == 1){
        ll p = power(n,m/2)%mod;
        ll o = (p*p)%mod;
        return (o*n)%mod;
    } else{
        ll p = power(n,m/2);
        return (p*p)%mod;
    }
}


int solve(){
    ll n,k; cin >> n >> k;
    vector<ll> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    vector<ll> pre(n+1,0);
    ll mi = 0;
    ll add = 0;
    for (int i = 1; i <= n; i++){
        pre[i] = pre[i-1] + a[i-1];
        mi = min(mi,pre[i]);
        add = max(add,pre[i]-mi);
    }
    ll ans = pre.back()%mod;
    add = add%mod;
    // cout << ans << endl;
    // cout << (add*power(2,k)) << endl;
    
    ans = max(ans,(pre.back()-add + (add*power(2,k))));
    while (ans < 0){
        ans += mod;
    }
    cout << (ans%mod) << endl;
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