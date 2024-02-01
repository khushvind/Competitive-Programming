#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int x ; cin >> x;
    if (x %2){
        cout << -1 << endl;
        return 0;
    }
    int a = x/2, b = x/2;
    if (a & x) {
      cout << -1 << endl;
      return 0;
    }
    cout << a + x << " " << b << endl;
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