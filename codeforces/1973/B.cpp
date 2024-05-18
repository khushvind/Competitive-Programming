#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve() {
    int n; cin >> n;
    vector<int> a(n); 
    for (int i = 0; i < n ;i++) cin >> a[i];
    vector<vector<int>> pos(20);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 20; j++){
            if (a[i] & (1<<j)) pos[j].push_back(i);
        }
    }
    int ans = 1;
    for (int i = 0; i < 20; i++){
        if (pos[i].size() == 0) continue;
        ans = max(pos[i][0]+1,ans);
        ans = max(n-pos[i].back(),ans);
        for (int j = 1; j < pos[i].size(); j++){
            ans = max(pos[i][j]-pos[i][j-1],ans);
        }
    }
    cout << ans << endl;
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