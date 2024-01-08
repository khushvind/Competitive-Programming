#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)
vector<vector<ll>> graph;
vector<ll> visited;
vector<ll> len;
ll best = 0;
ll n,k,c; 
 
int dfs(int curr, int dist){
    // visited[curr] = 1;
    for ( auto next : graph[curr]){
        if (!visited[next]){
            visited[next] = 1;
            len[curr] = max(len[curr], 1LL + dfs(next,dist+1));
        }
    }
    if (graph[curr].size() > 2 || (curr == 1 && graph[curr].size() > 1)){
        ll x=0,y=0;
        for (auto next : graph[curr]){
            if (len[next] >= x){
                y = x; x = len[next];
            } else if (len[next] >= y){
                y = len[next];
            }
        }
        x++;y++;
        best = max(best, (x+y)*k-(dist + y)*c);
    }
    return len[curr];
}
 
 
int solve(){
    cin >> n >> k >> c;
    graph.resize(n+1);
    visited.resize(n+1);
    len.resize(n+1);
    for (int i = 0; i < n-1; i++){
        int x,y; cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
 
    visited[1] = 1;
    dfs(1,0);
    if (k < c) {
        cout << k*len[1] << endl;
    } else {
        best = max(best, len[1]*k);
        cout << best << endl;
    }    
    graph.clear(); 
    visited.clear(); 
    len.clear();
    best = 0;
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