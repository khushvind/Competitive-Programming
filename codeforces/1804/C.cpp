#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    ll n,x,p; cin >> n >> x >> p;
    for (ll i = 1; i <= min(p, 2*n); i++){
        if ((x + (i*(i+1))/2)%n == 0){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
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