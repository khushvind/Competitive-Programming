#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int dfsCheck(vector<vector<int>>& graph, vector<int>& vis, vector<int>& path_vis , int curr){
    vis[curr] = 1;
    path_vis[curr] = 1;
    for (auto next : graph[curr]){
        // cout << curr << " " << next << endl;
        if (!vis[next]){
            if (dfsCheck(graph, vis, path_vis, next)) {
                continue;
            } else return false;
        } else if (path_vis[next]){
            return false;
        }
    }
    path_vis[curr] = 0;
    return true;
}

bool check_if_acyclic_dir(vector<vector<int>>& graph){
    int n = graph.size()-1;
    vector<int> in(n+1), vis(n+1), path_vis(n+1);
    for (int i = 1; i <= n; i++){
        if (!vis[i] && !dfsCheck(graph,vis,path_vis,i)){
            return false;
        } 
    }
    return true;
}

int solve(){
    int n,k; cin >> n >> k;
    vector<int> a(n);
    vector<vector<int>> graph(n+1);
    vector<int> in(n+1);
    for (int _ = 0; _<k; _++){
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 1; i < n-1; i++) {
            graph[a[i]].push_back(a[i+1]);
            in[a[i+1]]++;
        }
    }
    if (k == 1){
        cout << "YES" << endl;
    } else {
        int id = find(in.begin()+1,in.end(),0)-in.begin();
        if (check_if_acyclic_dir(graph)){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
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