#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n,m,k; cin >> n >> m >> k;
    vector<int> a(n),b(m);
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<m; i++) cin >> b[i];
    sort(a.begin(),a.end()); sort(b.begin(),b.end());
    // n = unique(a.begin(),a.end()) - a.begin();
    // m = unique(b.begin(),b.end()) - b.begin();

    a.erase(unique(a.begin(), a.end()), a.end());
    b.erase(unique(b.begin(), b.end()), b.end());
    set<int> st1,st2;
    for (int i = 0 ; i < a.size() ; i++){
        if (a[i] <= k) st1.insert(a[i]);
    }
    for (int i = 0 ; i < b.size(); i++){
        if (b[i] <= k) st2.insert(b[i]);
    }

    int x = 0, y =0;

    for (int i = 1 ; i <= k; i++){
        if (st1.count(i) && !st2.count(i)){
            x++;
        } else if (!st1.count(i) && st2.count(i)){
            y++;
        } else if (st1.count(i) && st2.count(i)){
            continue;
        } else {
            cout << "NO" << endl;
            return 0;
        }
        if (x > k/2 || y > k/2) {
            cout << "NO" << endl;
            return 0;
        }
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