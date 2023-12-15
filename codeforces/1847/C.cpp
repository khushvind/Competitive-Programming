#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int solve(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++){
        cin >> a[i];
    };
    int curr = 0;
    int const max_possible = 1<< 8;
    vector<int> has_pref(max_possible);
    has_pref[0] = 1;
    int ans = 0;
    for (auto i : a){
        curr ^= i;
        for (int j = 0 ; j < max_possible; j++){
            if (has_pref[j] == 1){
                // cout << j <<" " << pref[i] << " " << pref[j]<< endl;
                ans = max(curr^j,ans);
            }
        }
        has_pref[curr] = 1;
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