#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    ll n; cin >> n;
    vector<ll> a(n),b(n+1);
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<n+1; i++) cin >> b[i];
    ll ans = INT64_MAX, sum = 0;
    for (int i = 0;i < n; i++){
        sum += abs(a[i]-b[i]);
    }
    for (int i = 0; i < n; i++){
        ll val1 = sum+abs(b[n]-a[i])+1;
        ll val2 = sum+abs(b[n]-b[i])+1;
        ll val3 = sum+1;
        vector<ll> temp = {a[i],b[i],b[n]};;
        sort(temp.begin(),temp.end());
        if (temp[1] == b[n]) ans = min(ans,val3);
        else if (temp[1] == b[i]) ans = min(ans,val2);
        else if (temp[1] == a[i]) ans = min(ans,val1);
    }
    cout << ans << endl;

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