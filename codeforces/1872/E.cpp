#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)
int mod = 1e9 + 7;
int inf  = 1e9 + 10;

int solve(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    string s; cin >> s;
    int q; cin >> q;
    int x = 0, y = 0; // x for 0, y for 1
    vector<int> pre_xor(n+1);
    for (int i = 0; i < n; i++){
        pre_xor[i+1] = pre_xor[i]^a[i];
        if (s[i]-'0'){
            y^= a[i];
        } else {
            x^= a[i];
        }
    }
    for (int i = 0; i<q; i++){
        int type; cin >> type;
        if (type == 1){
            int l,r; cin >> l >> r;
            // for (int i = l-1; i < r; i++){
            //     x^= a[i];
            //     y^= a[i];
            // }
            int temp = pre_xor[r]^pre_xor[l-1];
            x^= temp;
            y^= temp;
        } else {
            int l; cin >> l;
            if (l) {
                cout << y << " ";
            } else {
                cout << x << " ";
            }
        }
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