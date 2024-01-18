#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n; cin >> n;
    string a,b,c; cin >> a >> b >> c;
    bool possible = false;
    for (int i = 0; i < n; i++){
        // if (a[i] == b[i] && a[i] == c[i] ){
        //     cout << "YES" << endl;
        // }
        if (a[i] != b[i] && (a[i] != c[i] && b[i] != c[i])){
            possible = true;
        } else if (a[i] == b[i] && (a[i] != c[i] && b[i] != c[i])){
            possible = true;
        }
    }
    if (possible){
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