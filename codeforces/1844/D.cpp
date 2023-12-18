#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)


int solve(){
    int n; cin >>n;
    int dist;
    for (int i = 2; i < n; i ++){
        if (n%i != 0){
            dist = i;
            break;
        }
    }
    // cout << dist << endl;
    string ans = "";
    for (int i = 0; i < n; i++){
        ans += char('a' + i%dist);
    }
    cout << ans << endl;
    

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