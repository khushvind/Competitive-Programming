#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    ll n; cin >> n;
    vector<ll> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    sort(a.begin(),a.end());
    if (a[0] == 1) {
        cout << "YES" << endl;
        return 0;
    }
    for (int i = 1; i < n; i++){
        if (a[i]%a[0] != 0){
            for (auto x : a){
                if (x%a[0] != 0 && x%a[i] != 0){
                    cout << "NO" << endl;
                    return 0;
                }
            }
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

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