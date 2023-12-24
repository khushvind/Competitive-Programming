#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n,m ; cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0; i<n; i++) cin >> a[i];
    for (int i = 0; i<m; i++) cin >> b[i];
    sort(b.rbegin(),b.rend());
    vector<int> c(n+m);
    int i = 0, j = 0;
    for (int k = 0; k < n+m; k++){
        if (j < m && b[j] >= a[i]){
            c[k] = b[j];
            j++;
        } else if (i < n && b[j] < a[i]){
            c[k] = a[i];
            i++;
        } else if (i < n){
            c[k] = a[i];
            i++;
        } else {
            c[k] = b[j];
            j++;
        }
    }
    for (auto x: c){
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


