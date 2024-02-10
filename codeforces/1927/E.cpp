#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n, k; cin >> n >> k;
    int m = n/k + (n%k > 0);
    vector<vector<int>> dp(k,vector<int> (m));
    int a = 1, b = n;
    for (int i = 0; i < n%k; i++){
        for (int j = 0; j < m; j++){
            if (i%2 == 0){
                dp[i][j] = a++;
            } else {
                dp[i][j] = b--;
            }
        }
    }
    for (int i = n%k; i < k; i++){
        for (int j = 0; j < n/k; j++){
            if (i%2 == 0){
                dp[i][j] = a++;
            } else {
                dp[i][j] = b--;
            }
        }
    }
    // for (auto x: dp){
    //     for (auto y : x){
    //         cout << y << ' ';
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    for (int j = 0; j < m; j++){
        for (int i = 0; i < k; i++){
            if (dp[i][j] == 0) break;
            cout << dp[i][j] << " ";
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
    };
    return 0;
}