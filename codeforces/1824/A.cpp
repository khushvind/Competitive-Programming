#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n,m; cin >> n >> m;
    vector<int> a(n);
    set<int> st;
    int x=0,y=0;
    for (int i = 0; i < n ; i++){
        cin >> a[i];
        if (a[i] == -1) {
            x++;
        } else if (a[i] == -2){
            y++;
        } else {
            st.insert(a[i]-1);
        }
    }
    // cout << x << " " << y << endl;
    int ans = max(st.size() + x, st.size()+y);
    int sz = 0;
    for (auto it = st.begin(); it!= st.end(); it++, sz++){ 
        int temp = min(*it, x+sz) + min(m-*it-1, y+int(st.size())-sz-1) + 1;
        ans = max(ans, temp);
    }
    // cout << "ans " << ans << endl;
    ans = min(ans,m);
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