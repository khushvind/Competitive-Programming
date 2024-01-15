#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int x1,y1; cin >> x1 >> y1;
    int x2,y2; cin >> x2 >> y2;
    int x3,y3; cin >> x3 >> y3;
    int x4,y4; cin >> x4 >> y4;
    int a = max(abs(x1-x2),abs(x1-x3)), b = max(abs(y1-y2),abs(y1-y3));
    cout << (a*b) << endl; 

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