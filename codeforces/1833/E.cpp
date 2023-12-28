#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)
int complete = 0;

bool dfs(vector<vector<int>>& graph, vector<int>& degree, vector<int>& visited, int i){
    bool comp = true;
    stack<int> st;
    st.push(i);
    visited[i] = 1;
    while (!st.empty()){
        int curr = st.top();
        st.pop();
        if (degree[curr] == 1){
            comp = false;
        }
        for (auto next : graph[curr]){
            if (!visited[next]){
                visited[next] = 1;
                st.push(next);
            } 
        }

    }
    return comp;
}

int solve(){
    int n; cin >> n;
    vector<int> a(n);
    vector<vector<int>> graph(n+1);
    vector<int> visited(n+1);
    vector<int> degree(n+1);
    for (int i=0; i<n; i++){
        cin >> a[i];
        if (degree[a[i]]){
            if (graph[a[i]][0] != i+1){
                degree[i+1]++; degree[a[i]]++;
                graph[i+1].push_back(a[i]);
                graph[a[i]].push_back(i+1);
            }
        } else {
            degree[i+1]++; degree[a[i]]++;
            graph[i+1].push_back(a[i]);
            graph[a[i]].push_back(i+1);
        }
    }

    // for (auto x: degree){
    //     cout << x << ' ';
    // }
    // cout << endl;
    
    int complete = 0;
    int in_complete = 0;
    for (int i = 1; i < n+1; i++){
        if (!visited[i]){
            if (dfs(graph,degree, visited,i)){
                complete++;
            } else {
                in_complete++;
            }
        }
    }
    // cout << complete << " " << in_complete << endl;
    int a1 = complete + (in_complete > 0);
    int a2 = complete + in_complete;
    cout << a1 << " " << a2 << endl;
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