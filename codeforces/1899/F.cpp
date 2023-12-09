#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)
int mod = 1e9 + 7;
int inf  = 1e9 + 10;

int solve(){
    int n, q; cin >> n >> q;
    vector<int> d(q);
    for (int i = 0; i <q; i++) cin >> d[i];
    for (int i = 1; i <n; i++){
        cout << i << " " << i+1 << endl;
    }
    int curr = n-1;
    for (int i =0; i < q; i++){
        if (curr != d[i]){
            cout << n << " " << curr << " " << d[i] << endl;
            curr = d[i];
        } else {
            cout << "-1 -1 -1" << endl;
        }
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