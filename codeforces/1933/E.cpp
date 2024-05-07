#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

ll calc(ll u,ll k){
    return (k*u - ((k-1)*k)/2);
}

int solve() {
    ll n; cin >> n;
    vector<int> a(n),presum(n+1);
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<n; i++)presum[i+1] = presum[i]+a[i];
    ll q; cin >> q;
    while (q--){
        ll l,u; cin >> l >> u;
        ll id = lower_bound(presum.begin()+l,presum.end(), u+presum[l-1]) - presum.begin();
        ll sum1= calc(u,presum[id-1]-presum[l-1]), sum2 = calc(u,presum[id]-presum[l-1]);
        if (id <= l){
            cout << l << " " ; 
        } else if (id<n+1){
            if (sum1 >= sum2){
                cout << id-1 << " ";
            } else {
                cout << id << " ";
            }
        } else {
            cout << n << " ";
        }
    }
    cout << endl;
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