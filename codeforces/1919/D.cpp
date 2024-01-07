#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    vector<int> nx(n), pr(n);
    for (int i = 0; i < n ; i++){
        nx[i] = i+1;
        pr[i] = i-1;
    }
    priority_queue<pair<int,int>> pq;
    for (int i= 0; i < n; i++){
        pq.push({a[i],i});
    }
    while (!pq.empty()){
        int i = pq.top().second; pq.pop();
        int mx = -1;
        if (pr[i] != -1) mx = max(mx, a[pr[i]]);
        if (nx[i] != n) mx = max(mx, a[nx[i]]);
        if ( a[i] > mx +1 || (a[i] == 0 && mx == 0)){
            cout << "NO" << endl;
            return 0;
        }
        if (pr[i] != -1) nx[pr[i]] = nx[i];
        if (nx[i] != n) pr[nx[i]] = pr[i];
    }
    cout << "YES" << endl;
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