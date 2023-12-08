#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)
int mod = 1e9 + 7;
int inf  = 1e9 + 10;

int solve(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int ans = 0;
    int mn = n + 1, mnWin = n + 1;
    for (int i = 0; i < n; i++){
        int x = a[i];
        if (mn < x && x < mnWin) {
          	ans += 1;
          	mnWin = x;
        }
        mn = min(mn, x);
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