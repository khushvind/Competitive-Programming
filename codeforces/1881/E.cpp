#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)
int mod = 1e9 + 7;
int inf  = 1e9 + 10;

int solve(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<int> dp(n);
    dp[n-1] = 1;
    for (int i = n-2; i>= 0; i--){
        int temp = 0;
        if (i+1+a[i] < n){
            temp = dp[i+1+a[i]];
        } else if (i+1+a[i] > n){
            temp = n-i;
        }
        dp[i] = min(1+dp[i+1], temp);
    }
    cout << dp[0] << endl;
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