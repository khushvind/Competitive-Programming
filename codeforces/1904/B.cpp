#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)
int mod = 1e9 + 7;
int inf  = 1e9 + 10;

int solve(){
    int n; cin >> n;
    vector<ll> a(n);
    vector<ll> org(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
        org[i] = a[i];
    }
    sort(a.begin(),a.end());
    vector<ll> presum(n+1);
    for (int i = 0; i < n; i++){
        presum[i+1] = presum[i] + a[i];
    }
    unordered_map<ll,ll> mp;
    for (int i = 0; i < n-1; i++){
        if (presum[i+1] >= a[i+1]){
            // cout << "HI "<< endl;
            vector<ll> temp;
            while (presum[i+1] >= a[i+1] && i < n){
                temp.push_back(a[i]);
                i++;
            }
            // for (auto x: temp){
            //     cout << x << ' ';
            // }
            // cout << endl;
            
            for (auto x : temp){
                mp[x] = min(i,n-1);
                // cout << "HI" << endl;
            }
            i--;
        } else {
            mp[a[i]] = i;
        }
    }
    mp[a[n-1]] = n-1;
    // for (auto x: a){
    //     cout << x << " " << mp[x] << endl;
    // }
    // cout << endl;
    

    for (auto x : org){
        cout << mp[x] << " ";
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