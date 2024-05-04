#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    ll n; cin >> n; n--;
    // cout << "n = " << n << endl;
    vector<ll> steps;
    while (n>0){
        if (n%2==0){
            n--;
            steps.push_back(1);
        } else {
            n--; n/=2;
            steps.push_back(0);
        }
    }
    
    // for (auto x: steps){
    //     cout << x << ' ';
    // }
    // cout << endl;
    
    reverse(steps.begin(),steps.end());
    vector<ll> ans;
    ll mi=0,mx=0;
    for (auto x : steps){
        if (x){
            ans.push_back(mi);
        } else {
            ans.push_back(mx);
            mx++;
        }
    }
    cout << ans.size() << endl;
    for (auto x: ans){
        cout << x << ' ';
    }
    cout << endl;
    
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