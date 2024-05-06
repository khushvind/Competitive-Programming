#include <bits/stdc++.h>

using namespace std;
using ll = unsigned long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    ll n; cin >> n;
    string s; cin >> s;
    vector<ll> presum(n+1);
    for (int i = 0; i < n; i++) presum[i+1] = presum[i]+(s[i]-'0');
    for (int i = n; i > 0; i--) {
        presum[i-1] += (presum[i]/10);
        presum[i] %= 10;
    }
    bool found = false;
    for (int i = 0; i <= n; i++){
        if (found){
            cout << presum[i] ;
        } else if (presum[i]!= 0){
            found = true;
            cout << presum[i] ;
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