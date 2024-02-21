#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n,x,y; cin >> n >> x >> y ;
    vector<int> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    ll ans = 0;
    map<pair<int,int>,int> mp;
    for (int i = 0; i < n; i++){
        int xx = a[i]%x, yy = a[i]%y;
        
        ans += mp[{(xx == 0? xx :(x - xx)  ),yy}];
        mp[{xx,yy}]++;
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