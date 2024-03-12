#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n,m,k; cin >> n >> m >> k;
    vector<int> a(m);
    for (int i=0; i<m; i++) cin >> a[i];
    int div = n/k;
    if (k > m){
        cout << "NO" << endl;
        return 0;
    }
    sort(a.rbegin(),a.rend());
    for (int i = 0; i < n%k; i++){
        a[i]--;
    }
    for (int i = 0; i < m; i++){
        if (a[i] > div){
            cout << "NO" << endl;
            return 0;
        }
    }
    
    cout << "YES" << endl;

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