#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)
int mod = 1e9 + 7;
int inf  = 1e9 + 10;

bool check(vector<ll>& a, vector<ll>& b, int k ){
    int n = a.size();
    int l = 0, r = 0;
    for (int i = 0; i < n; i++){
        r = r+k;
        l = l-k;
        int x = a[i],y=b[i];
        if (r < x || y < l) return false;
        r = min(r,y);
        l = max(l,x);
    }
    return true;
}

int solve(){
    int n; cin >> n;
    vector<ll> a(n),b(n);
    for (int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
    }
    // for (auto x : a) cout << x << " " ;
    // cout << endl;
    // for (auto x : b) cout << x << " " ;
    // cout << endl;
    int l = 0, r = INT_MAX;
    // cout<< check(a,b,13) << endl;
    
    while (l!= r){
        int m = (l+r)/2;
        if (!check(a,b,m)){
            l = m+1;
        } else {
            r = m;
        }
    }
    cout << l << endl;
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