#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n; cin >> n;
    for (int i = 0; i < 30; i++){
        if ((1<<i)<=n && n<(1<<(i+1))){
            cout << (1<<i) << endl;
            return 0;
        } 
    }

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