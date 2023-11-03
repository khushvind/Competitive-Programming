#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)
int mod = 1e9 + 7;
int inf  = 1e9 + 10;

int solve(){
    int x,y,k; cin >> x >> y >> k;
    if ((y-x >= 0) && (y-x <= k)){
        cout << y << endl;
    } else if (y-x >= 0){
        cout << (2*y-x-k) << endl;
    } else {
        cout << x << endl;
    }

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