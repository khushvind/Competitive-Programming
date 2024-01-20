#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    ll s = 0;
    int i = 0, j = n - 1;
    sort(a.begin(), a.end());
    if (a[0] == 0 && a[n-1] == 0){
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    vector<int> ans;
    while (i <= j) {
        if (s <= 0) {
            s += a[j];
            ans.push_back(a[j]);
            j--;
        } else {
            s += a[i];
            ans.push_back(a[i]);
            i++;
        }
    }
    
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
    };
    return 0;
}