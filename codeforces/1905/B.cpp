#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n; cin >> n;
    vector<vector<int>> graph(n);
    vector<int> deg(n+1);
    for (int i = 0; i < n-1; i++){
        int x,y; cin >> x >> y ;
        deg[y]++;
        deg[x]++;
    }
    
    int num = 1;
    for (auto x : deg){
        if (x == 1) num++;
    }
    cout << num/2 << endl;
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