#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    vector<int> d1(n+2);
    vector<int> d2(n+2);
    vector<int> d3(n+2,INT_MIN);
    for (int i = 0; i < n; i ++) d1[i+1] = max(a[i]+i+1, d1[i]);  
    for (int i = n-1; i >= 0; i --) d3[i+1] = max(a[i]-i-1, d3[i+2]);  
    for (int i = 0; i < n; i ++) d2[i+1] = a[i]; 
    int ans = 0; 
    for (int i = 2; i < n; i++){
        ans = max(ans, d2[i] + d1[i-1] + d3[i+1]);
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