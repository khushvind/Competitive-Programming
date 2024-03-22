#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    ll n; cin >> n;
    vector<ll> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    sort(a.begin(),a.end());
    ll id = n/2+n%2;
    ll mid = a[id-1];
    ll up = upper_bound(a.begin(),a.end(),mid)-a.begin();
    // cout << id << " " << up << endl;
    if (up == n){
        cout << (n-id+1) << endl;
    } else {
        cout << (up-(id-1)) << endl;
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