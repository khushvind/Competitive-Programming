#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    ll n; cin >> n;
    vector<ll> a(n);
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    vector<ll> b(n);
    ll ans = 0;
    ll last = 0;
    for (int i = 1; i < n; i++){
        if (a[i] >= a[i - 1]) {
    		int c = 0, x = a[i - 1], y = a[i];
    		while (x * 2 <= y) x *= 2, c++;
    		ll cur = max(0ll, last - c);
    		ans += cur;
    		last = cur;
    	} else {
    		int c = 0, x = a[i - 1], y = a[i];
    		while (y < x) y *= 2, c++;
    		ll cur = last + c;
    		ans += cur;
    		last = cur;
    	}
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