#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n; cin >> n;
    vector<string> grid(2);
    cin >> grid[0] >> grid[1];
    int cnt = 1;
    int i = 0;
    for (; i < n-1 ; i++){
        if (grid[0][i+1] == grid[1][i]){
            cnt++;
        } else if (grid[0][i+1] < grid[1][i]){
            cnt = 1;
        } else break;
    }
    cout << (grid[0].substr(0,i+1) + grid[1].substr(i,n-i)) << endl;
    cout << cnt << endl;
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