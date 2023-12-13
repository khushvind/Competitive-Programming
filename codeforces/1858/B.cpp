#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)
int mod = 1e9 + 7;
int inf  = 1e9 + 10;

int solve(){
    ll n,m,d; cin >> n >> m >> d;
    vector<ll> s(m+2);
    for (int i = 0; i < m; i++) cin >> s[i+1];
    s[0] = 1-d;
    s[m+1] = n+1;
    ll total_cost = 0;
    for (int i = 1; i < s.size(); i++)
    {
        total_cost += (s[i] - s[i - 1] - 1) / d;
    }
    total_cost += int(s.size()) - 2;
    // cout << total_cost << endl;
    unordered_map<ll,ll> mp;
    ll min_cost = total_cost;
    for (int i = 1; i<= m; i++){
        ll cost;
        cost = total_cost - ((s[i]-s[i-1]-1)/d + (s[i+1]-s[i]-1)/d + 1 ) + (s[i+1]-s[i-1]-1)/d ;
        // cout << i << " " << cost << " "  << ((s[i]-s[i-1]-1)/d + (s[i+1]-s[i]-1)/d + 1 ) << " " <<  (s[i+1]-s[i-1]-1)/d  << endl;
        min_cost = min(cost,min_cost);
        mp[cost]++;
    }

    cout << min_cost << " " <<mp[min_cost] <<endl;
    

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