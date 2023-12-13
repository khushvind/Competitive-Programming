#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)
int mod = 1e9 + 7;
int inf  = 1e9 + 10;

int solve(){
    ll n; cin >> n;
    vector<pair<ll,ll>> a(n);
    vector<ll> b(n);
    for (int i=0; i<n; i++){
        cin >> a[i].first;
        a[i].second = i;
        // b[i] = a[i];
    };
    
    sort(a.begin(),a.end());
    ll curr = 0;
    for (int i = 0; i < n; i++){
        curr += a[i].first-a[0].first;
    }
    // unordered_map<ll,ll> mp;
    vector<ll> ans(n);
    ans[a[0].second] = curr+n;
    for (int i = 1; i < n; i++){
        if (a[i].first == a[i-1].first) {
            ans[a[i].second] = curr+n;
            continue;
        }
        curr += (2*i - n)*(a[i].first-a[i-1].first);
        ans[a[i].second] = curr+n;
    }
    for (int i = 0; i < n; i++){
        cout << ans[i] << " "; 
    }
    cout << endl;
    


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