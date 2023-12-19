#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n; cin >> n;
    priority_queue<pair<int,int>> a;
    priority_queue<pair<int,int>> b;
    priority_queue<pair<int,int>> c;
    for (int i=0; i<n; i++) {
        int x; cin >> x;
        a.push({x,i});
    }
    for (int i=0; i<n; i++) {
        int x; cin >> x;
        b.push({x,i});
    }
    for (int i=0; i<n; i++) {
        int x; cin >> x;
        c.push({x,i});
    }
    vector<vector<int>> vec1;
    vector<vector<int>> vec2;
    vector<vector<int>> vec3;
    for (int i = 0; i < 3; i++){
        vec1.push_back({a.top().first, a.top().second});
        a.pop();
    }
    for (int i = 0; i < 3; i++){
        vec2.push_back({b.top().first, b.top().second});
        b.pop();
    }
    for (int i = 0; i < 3; i++){
        vec3.push_back({c.top().first, c.top().second});
        c.pop();
    }
    int ans = 0;
    for (auto x : vec1){
        for (auto y : vec2){
            for (auto z: vec3){
                if (x[1] != y[1] && x[1] != z[1] && z[1] != y[1]){
                    ans = max(ans, x[0]+y[0]+z[0]);
                }
            }
        }
    }
    cout<< ans << endl;
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