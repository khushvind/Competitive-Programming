#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    ll n,s1,s2; cin >> n >> s1 >> s2;
    vector<pair<ll,ll>> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i].first;
        a[i].second = i+1;
    }
    sort(a.rbegin(), a.rend());
    vector<ll> arr1,arr2;
    ll i1 =0,i2 = 0;
    for (auto x : a){
        // cout << x.first << " " << x.second << endl;
        if ((i1 + 1)*s1 > (i2 + 1)*s2 ){
            arr2.push_back(x.second);
            i2 ++;
        } else if ((i1 + 1)*s1 == (i2 + 1)*s2 ){
            if (s1 > s2){
                arr1.push_back(x.second);
                i1 ++;
            } else {
                arr2.push_back(x.second);
                i2 ++;
            }
            
        } else{
            arr1.push_back(x.second);
            i1 ++;
        }
    }  
    cout << arr1.size() << " " ;
    for (auto x: arr1){
        cout << x << ' ';
    }
    cout << endl;
    cout << arr2.size() << " " ;
    for (auto x: arr2){
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
    };
    return 0;
}