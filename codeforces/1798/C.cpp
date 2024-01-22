#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

ll lcm(ll a, ll b){
    return ((a*b)/__gcd(a,b));
}


int solve(){
    ll n; cin >> n;
    vector<ll> a(n),b(n);
    for (int i = 0 ; i<n; i++) cin >> a[i] >> b[i] ;
    ll req = 1, curr = 1, rem = 0;
    // for (int i = 0; i < n ; i++){
    //     ll cost = lcm(curr,b[i]);
    //     ll d = cost/b[i];
    //     if (a[i]%d == 0 && rem%(cost/curr) == 0){
    //         curr = cost;
    //         rem = __gcd(a[i]/d,rem);
    //     } else {
    //         req ++;
    //         curr = b[i];
    //         rem = a[i];
    //     }
    // }
    for (int i = 0; i < n; i++){
        curr = lcm(curr,b[i]);
        rem = __gcd(rem, a[i]*b[i]);
        if (rem%curr){
            req++;
            curr = b[i];
            rem = a[i]*b[i];
        }
    }

    cout << req << endl;

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