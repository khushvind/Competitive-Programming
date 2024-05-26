#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    ll n; cin >> n;
    vector<ll> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    if (n==2) cout << min(a[0],a[1]) << endl;
    else {
        ll ans= min(a[0],a[1]);
        for (int i = 1; i<n-1; i++){
            vector<ll> temp;
            for (int j = -1; j < 2; j++){
                temp.push_back(a[i+j]);
            }
            sort(temp.begin(),temp.end());
            ans =max(ans,temp[1]);
        }
        cout << ans << endl;
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

