#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

pair<int,int> get_mid_pt(vector<vector<int>>& graph, int a, int b){
    if (a==b) return {a,0};
    vector<int> visited(graph.size());
    queue<int> q1,q2;
    q1.push(a); q2.push(b);
    visited[a] = 1; visited[b] = 2;
    int dist = 0;
    while (!q1.empty() || !q2.empty()){
        dist++;
        int t = q1.size();
        while (t--){
            int curr = q1.front();
            q1.pop();
            for (auto next : graph[curr]){
                if (visited[next] == 0){
                    visited[next] = 1;
                    q1.push(next);
                } else if (visited[next] == 2){
                    return {curr,dist};
                }
            }
        }
        t = q2.size(); 
        while (t--){
            int curr = q2.front();
            q2.pop();
            for (auto next : graph[curr]){
                if (visited[next] == 0){
                    visited[next] = 2;
                    q2.push(next);
                } else if (visited[next] == 1){
                    return {next,dist};
                }
            }
        }
    }
    return {0,0};
}

int find_d(vector<vector<int>>& graph, int curr){
    vector<int> visited(graph.size());
    queue<int> q;
    q.push(curr); visited[curr] =1;
    int d = 0;
    while (!q.empty()){
        d++;
        int t = q.size();
        while (t--){
            curr = q.front();
            q.pop(); 
            for (auto next : graph[curr]){
                if (visited[next] == 0){
                    visited[next] = 1;
                    q.push(next);
                }
            }
        }
    }
    return d-1;
}


int solve(){
    int n;cin >> n;
    int a,b; cin >> a >> b;
    vector<vector<int>> graph(n+1);
    for (int i = 0; i < n-1; i++) {
        int x,y; cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    auto x  = get_mid_pt(graph,a,b);
    int pt = x.first, alp = x.second;
    int d = find_d(graph,pt);
    cout << (2*(n-1)-d+alp) << endl;

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