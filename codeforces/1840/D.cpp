#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n; cin >> n;
    vector<int> a(n);
    set<int> st;
    for (int i =0; i < n; i++){
        cin >> a[i];
        st.insert(a[i]);
    }
    if (st.size() <= 3) {
        cout << 0 << endl;
        return 0; 
    }
    sort(a.begin(), a.end());
    int mi = INT_MAX;
    for (int i = 0; a[i]-a[0] <= a[n-1]-a[i+1] ; i++){
        // cout << "HI" << endl;
        int idx = upper_bound(a.begin()+i+1,a.end(), (a[i+1]+a[n-1])/2) - a.begin();
        // if (idx == i+1) idx++;
        // cout << i << " " << idx << endl;
        
        mi = min(mi, max({(a[i]-a[0]+1)/2, (a[idx-1]-a[i+1]+1)/2, (a[n-1] - a[idx]+ 1)/2 }));  
    }
    cout << mi << endl;
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