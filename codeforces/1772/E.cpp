#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    int x = 0,y = 0,z= 0;
    for (int i = 0; i < n; i++){
        if (a[i] == i+1 && a[i] == n-i){
            continue;
        } else if (a[i] == i+1 && a[i]!= n-i){
            z++;
        } else if (a[i] != i+1 && a[i] == n-i){
            x++;
        } else if (a[i] != i+1 && a[i] != n-i){
            y++;
        }
    }
    if (x+y <= z){
        cout << "First" << endl;
    } else if (z+y < x){
        cout << "Second" << endl;
    } else {
        cout << "Tie" << endl;
    }
    // int t = min(x,z);
    // x-= t; z-= t;
    // if (y == 0 && x == 0 && y== 0){
    //     cout << "First" << endl;
    // } else if (x == 0){
    //     if (y <= z) cout << "First"<< endl;
    //     else cout << "Tie" << endl;
    // } else {
    //     if (y < x) cout << "Second"<< endl;
    //     else cout << "Tie" << endl;
    // }

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