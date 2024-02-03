#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n; cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<n; i++) cin >> b[i];
    vector<vector<int>> temp(n,vector<int> (3));
    for (int i = 0; i < n; i++){
        temp[i][0] = a[i]+b[i];
        temp[i][1] = a[i];
        temp[i][2] = b[i];
    }
    sort(temp.begin(),temp.end());
    for (auto x: temp){
        cout << x[1] << " " ;
    }
    cout << endl;
    for (auto x: temp){
        cout << x[2] << " " ;
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