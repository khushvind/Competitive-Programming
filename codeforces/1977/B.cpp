#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    ll n; cin >> n;
    vector<ll> a(32);
    int carr = 0;
    for (int i = 0; i < 31; i++){
        if (n%2) {
            a[i] = carr + 1; carr = 0;
            carr = a[i]/2;
            a[i] = a[i]%2;
            // cout << i << " " << a[i] << " " << a[i+1] << endl;
            if (i>0 && a[i]==1 && a[i-1] == 1){
                a[i-1] = -1; 
                a[i] = 0; 
                carr = 1;
            } 
        } else {
            a[i] = carr; carr = 0;
            if (i>0 && a[i]==1 && a[i-1] == 1){
                a[i-1] = -1; 
                a[i] = 0;
                carr = 1;
            } 
        }
        
        n /= 2;
    }
    cout << a.size() << endl;
    for (auto x: a){
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