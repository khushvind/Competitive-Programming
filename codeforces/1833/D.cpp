#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int opr(vector<int>& a, int l, int r){
    int n = a.size();
    for (int i = r+1; i < n; i++){
        cout << a[i] << " ";
    }
    for (int i = r; i>= l; i--){
        cout << a[i] << " " ;
    }
    for (int i = 0; i <l; i++){
        cout << a[i] << " " ;
    }
    cout << endl;
    return 0;
}

int solve(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++){
        cin >> a[i];
    };
    int idx = max_element(a.begin(),a.end()) - a.begin();
    if (idx == 0){
        int idx_ = max_element(a.begin()+1,a.end()) - a.begin();
        if (idx_ == n-1) {
            opr(a,idx_,idx_);
        } else {
            opr(a,idx_-1,idx_-1);
        }
    } else if (idx == n-1){
        if (a[idx-1] > a[0]){
            int r = idx-1, l = idx -1;
            while (l > 0 && a[l-1] > a[0]) l--;
            opr(a,l,r);
        } else {
            opr(a,idx,idx);
        }
    } else {
        int r = idx-1, l = idx -1;
        while (l > 0 && a[l-1] > a[0]) l--;
        opr(a,l,r);
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