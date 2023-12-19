#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n,k; cin >> n >> k;

    for (int i = n-k; i <= n; i++){
        cout << i << " " ;
    }
    for (int i = n-k-1; i >0; i--){
        cout << i << " " ;
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