#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int power(int n, int m) {
    if (m == 0){
        return 1;
    } else if (m%2 == 1){
        int p = power(n,m/2);
        int o = (p*p);
        return (o*n);
    } else{
        int p = power(n,m/2);
        return (p*p);
    }
}

int solve(){
    ll a,b,c,k; cin >> a >> b >> c >> k ;
    if (c > max(a,b)+1) {
        cout << -1 << endl;
        return 0;
    }
    bool good = false;
    for (int i = power(10, a-1); i < power(10, a); ++i) {
        ll left = max(power(10, b-1), power(10, c-1) - i);
        ll right = min(power(10, b)-1, power(10, c) - 1 - i);
        if (left > right) continue;

        ll have = right - left + 1;
        if (k <= have) {
            cout << i << " + " << left + k - 1 << " = " << (left + k - 1+i) << endl;
            good = true;
            break;
        }
        k -= have;
    }
    if (!good) cout << "-1" << endl;


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