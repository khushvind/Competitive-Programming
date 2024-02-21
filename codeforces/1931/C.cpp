#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    int i = 0, j = n-1;
    while (i < n-1 && a[i] == a[i+1]) i++;
    while (j > 0 && a[j] == a[j-1]) j--;
    if ( j <= i) {
        cout << 0 << endl;
        return 0;
    }
    if (a[0] == a[n-1]){
        i++; j--;
        cout << (j-i+1) << endl;
    } else {
        i++;j--;
        cout << min(n-1-i+1, j-0+1) << endl;
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