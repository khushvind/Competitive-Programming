#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    ll n,P,l,t; cin >> n >> P >> l >> t;
    ll tasks = (n+6)/7;
    ll temp = (tasks+1)/2;
    ll ans = 0;
    if (P < tasks*t + temp*l){
         ans = P/(2*t+l) + ((P%(2*t+l) > 0)? 1 : 0);
        cout << (n-ans) << endl;
        return 0;
    }
    ans += temp;
    P -= tasks*t + temp*l;
    ans += P/(l) + ((P%(l) > 0)? 1 : 0); 
    cout << (n-ans) << endl;


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