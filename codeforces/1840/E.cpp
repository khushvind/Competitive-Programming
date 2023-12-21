#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int check(string&a, string&b, vector<int> blocked){
    for (int i = 0; i < a.length(); i++){
        if (!blocked[i] && a[i] != b[i]){
            cout << "NO" << endl;
            return 0;
        }   
    }
    cout << "YES" << endl;
    return 0;
}

int solve(){
    string a,b; cin >> a >> b;
    int diff = 0;
    for (int i = 0 ; i < a.length(); i++){
        if ( a[i] != b[i]) diff++;
    }
    int t,q; cin >> t >> q;
    int time = 0;
    queue<vector<int>> qu;
    vector<int> blocked(a.length());
    while (q--){
        int x; cin >> x;
        while (!qu.empty() && qu.front()[0] == time){
            blocked[qu.front()[1]-1] = 0;
            diff += (a[qu.front()[1]-1] != b[qu.front()[1]-1]);
            qu.pop();
        }
        if (x == 1) {
            int idx; cin >> idx;
            blocked[idx-1] = 1;
            diff -= (a[idx-1] != b[idx-1]);
            qu.push({time+t,idx});
        } else if (x == 2){
            int t1,p1,t2,p2; cin >> t1 >> p1 >> t2 >> p2;
            diff -= (a[p1-1] != b[p1-1]) + (a[p2-1] != b[p2-1]);
            swap((t1 == 1? a : b)[p1-1], (t2 == 1? a : b)[p2-1]);
            diff += (a[p1-1] != b[p1-1]) + (a[p2-1] != b[p2-1]);
        } else {
            cout << (diff == 0? "YES" : "NO") << endl;
        }
        time++;
    }
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