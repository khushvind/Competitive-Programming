#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int x,y; cin >> x >> y;
    int ans = 0;
    for (int i = 0; i < 32; i++){
        if ((x & 1<<i) == (y & 1<<i)){
            ans++;
        }  else break;
    }
    cout << (1<< ans) << endl;
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