#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    ll n,c; cin >> n >> c;
    vector<ll> a(n);
    ll o = 0, e = 0;
    for (int i=0; i<n; i++) {
        cin >> a[i];
        if (a[i]%2) o++;
        else e++;
    }
    ll sum = ((c+1*1LL)*(c+2*1LL))/2;
    for (auto x : a){
        sum -= x/2 + 1 + c-x+1;
    }
    sum += (o*(o+1))/2 + (e*(e+1))/2;
    cout << sum << endl;
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