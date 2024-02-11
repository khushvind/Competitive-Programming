#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int a,b; cin >> a >> b;
    if (a%2 == 0 && 2*b != a){
        cout << "YES" << endl;
    } else if (b%2 == 0 && 2*a != b){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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