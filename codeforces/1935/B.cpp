#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    set<int> st;
    // int mx = 0;
    for (auto x : a ) {
        st.insert(x);
        // mx = max(mx,x);
    }
    int mex = 0;
    for (auto it = st.begin(); it!= st.end(); it++){
        if (*it != mex){
            break;
        } else {
            mex++;
        }
    }
    // cout << mex << " ";
    set<int> temp;
    pair<int,int> ans;
    int start = 0;
    int i = 0;
    for (; i < n; i++){
        if (temp.size() < mex && a[i] < mex){
            temp.insert(a[i]);
        }
        if (temp.size() == mex){
            ans.first = start + 1;
            ans.second = i+1;
            break;
        }
    }
    // cout << i << endl;
    temp.clear();
    for (int j = i+1; j < n; j++){
        if ( a[j] < mex){
            temp.insert(a[j]);
        }
    }
    if (temp.size() == mex) {
        cout << 2 << endl;
        cout << ans.first << " " << ans.second << endl;
        cout << ans.second+1 << " " << n <<endl;
    } else {
        cout << -1 << endl;
    }
    

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