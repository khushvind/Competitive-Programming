#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    int ans = 0;
    // for (int k = 1; k <= n; k++){
    //     if (n % k == 0){
    //         // cout << k << " " ;
    //         int g = 0;
    //         for (int i = 0; i + k < n; i++)
    //             g = __gcd(g, abs(a[i + k] - a[i]));
    //         ans += (g != 1);
    //     }
    // }
    // cout << endl;

    vector<int> k_vec;
    for (int i = 1; i <= n; i++) if (n%i == 0) k_vec.push_back(i);
    
    // for (auto x: k_vec){
    //     cout << x << ' ';
    // }
    // cout << endl;
    
    for (auto k : k_vec){
        int m = 0;
        for (int i = 0; i+k < n; i++){
            m = __gcd(m,abs(a[i+k]-a[i]));
        }
        if (m!=1) ans++;
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