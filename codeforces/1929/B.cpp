#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n, k; cin >> n >> k;
    if (k%2){
        cout << (1+(k-1)/2) << endl;
    } else {
        if (k == 4*n-2){
            cout << (2*n) << endl;
        } else {
            cout << (k/2) << endl;
        }
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