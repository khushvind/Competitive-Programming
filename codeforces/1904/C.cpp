#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)
int mod = 1e9 + 7;
int inf  = 1e9 + 10;

int solve(){
    ll n,k; cin >> n >> k;
    vector<ll> a(n);
    for (int i =0; i < n; i++) cin >> a[i];
    sort(a.begin(),a.end());
    if (k >= 3) {
        cout << 0 << endl;
    } else if (k== 1){
        ll mi = LONG_LONG_MAX;
        for (int i =0; i < n-1; i++) {
            mi = min({mi,a[i+1]-a[i],a[i]});
            // cout << (a[i+1]-a[i]) << " " << a[i+1] << " " << a[i] << endl;
        }
        cout << mi << endl;
    } else {
        ll mi = LONG_LONG_MAX;
        for (int i =0; i < n; i++){
            for (int j = i+1; j < n; j++){
                ll curr = a[j]-a[i];
                ll it = lower_bound(a.begin(),a.end(),curr)-a.begin();
                mi = min({curr,mi, abs(a[min(it,n-1)]-curr),abs(curr-a[max(0LL,it-1)])});
                // mi = min(mi,min(a[it]-mi,abs(mi-a[max(0LL,it-1)])));
            }
        }
        cout << mi << endl;
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