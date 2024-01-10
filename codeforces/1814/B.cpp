#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int a,b; cin >> a >> b;
    int ans= INT_MAX;
    for (int i = 1; i <= min(max(a,b), 100000); i++){
        ans = min(ans , (a+i-1)/i + (b+i-1)/i + i-1);
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