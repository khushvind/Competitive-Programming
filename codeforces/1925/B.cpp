#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int x,n; cin >> x >> n;
    vector<int> a;
    for (int i = 1; i*i <= x ; i++){
        if (x % i == 0){
            a.push_back(i);
            a.push_back(x/i);
        }
    }
    sort(a.begin(),a.end());
    int idx = lower_bound(a.begin(), a.end(), n)-a.begin();
    cout << x/a[idx] << endl;
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