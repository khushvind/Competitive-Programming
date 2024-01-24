#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n; cin >> n;
    vector<int> a(n),pos(n+1);
    for (int i=0; i<n; i++) {
        cin >> a[i];
        pos[a[i]] = i;
    }
    int l = (n+1)/2, r = (n+1)/2 + (n%2==0);
    // cout << l << " " << r << endl;
    int prev_l = n,prev_r=-1;
    while (pos[l] <= pos[r] && prev_l > pos[l] && prev_r < pos[r] && l > 0){
        prev_r = pos[r]; prev_l = pos[l];
        l--,r++;
    }
    cout << (l) << endl;
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