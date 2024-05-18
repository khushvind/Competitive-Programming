#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n; cin >> n;
    vector<int> a(n);
    vector<pair<int,int>> a1,a2;
    bool n_even = true;
    for (int i=0; i<n; i++) {
        cin >> a[i];
        if (i%2 == 0) a1.push_back({a[i],i});
        else a2.push_back({a[i],i});
        if (a[i] == n && i%2==1) n_even = false;
    }
    sort(a1.begin(),a1.end());
    sort(a2.begin(),a2.end());
    if (n_even){
        for (int i = 0; i < n/2; i++){
            auto x = a1[i];
            a[x.second] = n-i;          
        }
        for (int i = 0; i <n/2; i++){
            auto x = a2[i];
            a[x.second] = n/2-i;
        }
    } else {
        swap(a1,a2);
        for (int i = 0; i < n/2; i++){
            auto x = a1[i];
            a[x.second] = n-i;          
        }
        for (int i = 0; i <n/2; i++){
            auto x = a2[i];
            a[x.second] = n/2-i;
        }
    }
    for (auto x: a){
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