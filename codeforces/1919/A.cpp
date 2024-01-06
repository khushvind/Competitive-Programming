#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    ll n,m; cin >> n >> m;
    ll ans = n+m;
    if (ans%2){
        cout << "Alice"<< endl;
    } else  {
        cout << "Bob" << endl;
    }

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