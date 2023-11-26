#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)
int mod = 1e9 + 7;
int inf  = 1e9 + 10;

int solve(){
    int n; cin >> n;
    // vector<int> a(n);
    int mx = 0, mi = INT_MAX;
    for (int i=0; i<n; i++){
        int x; cin >> x;
        mi = min(x,mi);
        mx = max(x,mx);
    };
    int ans = 0;
    vector<int> arr;
    while (mi != mx){
        if (mi%2 == 1 && mx%2 == 0){
            arr.push_back(1);
            mi = (mi+1)/2;
            mx = (mx+1)/2;
        } else {
            arr.push_back(0);
            mi/= 2;
            mx/= 2;
        }
        // cout << mi << " " << mx << " " << " mi,mx" << endl;
        ans ++;
    }

    // cout << "arr size " << arr.size() << endl; 
    
    cout << ans << endl;
    if (ans <= n && ans != 0){
        for (auto x :arr){
            cout << x << " " ;
        }
        cout << endl;
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