#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int lcm(int a, int b){
    return ((a*b)/__gcd(a,b));
}

int solve(){
    ll n; cin >> n;
    vector<ll> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    ll l= a[0];
    for (int i = 1; i < n; i++){
        l = lcm(l,a[i]);
    }
    // cout << l << endl;
    vector<ll> ans;
    ll sum = 0;
    // ans.push_back(l/a[0]+1);
    for (int i = 0; i < n; i++) {
        ans.push_back(l/a[i]);
        sum+= ans.back();
    }
    if (sum >= l) {
        cout << -1 << endl;
        return 0;
    }

    for (auto x: ans){
        cout << x << ' ';
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