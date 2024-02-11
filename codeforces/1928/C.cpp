#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

unordered_set<ll> make_set(ll a) {
    unordered_set<ll> candidates;
    for (ll i = 1; i * i <= a; i++) {
        if (a % i == 0) {
            if (i % 2 == 0) 
                candidates.insert(i);
            if ((a / i) % 2 == 0)
                candidates.insert(a / i);
        }
    }
    unordered_set<ll> answer;
    for (ll i : candidates) {
        answer.insert(1 + i / 2);
    }
    return answer;
}

int solve(){
    ll n,x; cin >> n >> x;
    if ((n-x)%2 == 1 || (n+x-2)%2 == 1){
        cout << 0 << endl;
        return 0;
    } else {
        ll ans = 0;
        ll v1 = (n-x);
        ll v2 = (n+x-2);
        unordered_set<ll> st;
        st = make_set(v1);
        for (auto y : make_set(v2)){
            st.insert(y);
        }

        for (auto y : st){
            if (y >= x) ans++;
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
    };
    return 0;
}