#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n; cin >> n;
    int l = 0, r = INT_MAX;
    set<int> st;
    while (n--){
        int a,x; cin >> a >> x ;
        if (a == 1){
            l = max(l,x);
        } else if (a== 2){
            r = min(r,x);
        } else{
            st.insert(x);
        }
    }
    int ans = max(r-l+1,0);
    for (auto x : st){
        if (l <= x && x <= r){
            ans--;
        }
    }
    cout << ans << endl;
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