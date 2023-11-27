#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)
int mod = 1e9 + 7;
int inf  = 1e9 + 10;

int solve(){
    int n; cin >> n;
    // cout << "n = " << n << endl;
    vector<int> a(n);
    for (int i=0; i<n; i++){
        cin >> a[i];
    };
    ll ans = 0;
    for (int i = n-1; i>0; i--){
        if (a[i-1] > a[i]){
            int k = a[i-1]/a[i] + ((a[i-1]%a[i] == 0)? 0 : 1); 
            // cout << k << " " ;
            a[i-1] = a[i-1]/k;
            // cout << a[i-1] << endl;
            ans += k-1;
        }
    }
    cout << ans << endl;
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