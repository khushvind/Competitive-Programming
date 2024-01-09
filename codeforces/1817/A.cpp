#include "bits/stdc++.h"
using namespace std;

int main() {
    int n,q; cin >> n >> q;
    vector<int> a(n);
    for(int& i : a) cin >> i;
    vector<int> p(n-1);
    for(int i=1;i<n-1;++i) {
        int downhill = a[i-1]>=a[i] and a[i]>=a[i+1];
        p[i] = p[i-1] + downhill;
    }
    while(q--) {
        int l,r; cin >> l >> r;
        --l,--r;
        if(l==r) {
            cout << 1 << endl;
        } else {
            int ans = (r-l+1) - p[r-1] + p[l];
            cout << ans << endl;
        }
    }
}