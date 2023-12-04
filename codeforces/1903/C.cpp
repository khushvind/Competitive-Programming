#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)
int mod = 1e9 + 7;
int inf  = 1e9 + 10;

int solve(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i<n; i++){
        cin >> a[i];
    }
    vector<ll> sum(n);
    sum[n-1] = a[n-1];
    for (int i = n-2; i >= 0; i--){
        sum[i] = a[i] + sum[i+1];
    }
    ll ans = sum[0];
    for (int i = 1; i < n; i++){
        if (sum[i]>0){
            ans += sum[i];
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