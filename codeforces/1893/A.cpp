#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)
int mod = 1e9 + 7;
int inf  = 1e9 + 10;

int solve(){
    int n,k; cin >> n >> k;
    vector<int> a(n);
    for (int i=0; i<n; i++){
        cin >> a[i];
    };
    vector<int> visited(n);
    int times = min(n,k);
    int idx = n-1;
    for (int i = 0; i<k; i++){
        if (a[idx] > n) {
            cout << "No" << endl;
            return 0;
        }
        idx = (n+idx-a[idx])%n;
        if (visited[idx] == 1){
            cout << "Yes" << endl;
            return 0;
        } else {
            visited[idx] = 1;
        }
    }
    cout << "Yes" << endl;
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