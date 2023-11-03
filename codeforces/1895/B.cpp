#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)
int mod = 1e9 + 7;
int inf  = 1e9 + 10;

int solve(){
    int n; cin >> n;
    vector<int> a(2*n);
    for (int i=0; i<2*n; i++){
        cin >> a[i];
    };
    sort(a.begin(),a.end());
    cout << (a[n-1]-a[0] + a[2*n-1] - a[n]) << endl;
    for (int i = 0; i < n; i++){
        cout << a[i] << " " << a[i+n] << endl;
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