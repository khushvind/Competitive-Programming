#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    map<int,stack<int>> mp;
    for (int i = 25; i >= 0; i--){
        mp[0].push(i);
    }
    string ans = "";
    for (int i = 0; i < n; i++){
        int req = mp[a[i]].top();
        mp[a[i]].pop();
        mp[a[i]+1].push(req);
        ans += 'a' + req;
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