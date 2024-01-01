#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n,x; cin >> n >> x;
    vector<pair<int,int>> a(n);
    vector<pair<int,int>> b(n);
    for (int i=0; i<n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }
    for (int i=0; i<n; i++) {
        cin >> b[i].first;
        b[i].second = i;
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    // for (auto x: a){
    //     cout << x.first << ' ';
    // }
    // cout << endl;
    for (int i = 0; i < x; i++){
        if (b[i].first >= a[n-x+i].first){
            cout << "NO" << endl;
            return 0;
        }
    } 
    for (int i = 0; i < n-x; i++){
        if (a[i].first > b[i+x].first){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    vector<int> ans(n);
    for (int i = 0; i < n; i++){
        ans[a[i].second]= b[(i+x)%n].first;
    }
    for (auto x: ans){
        cout << x << ' ';
    }
    cout << endl;
    
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