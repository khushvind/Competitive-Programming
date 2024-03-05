#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)


int main(void){
    ll n;cin >> n;
    string s;cin >> s;
    ll n_a = 0, n_s = 0;
    for (auto x : s){
        if (x == '+') n_a++;
        else n_s++;
    }
    ll q, x = max(n_a,n_s), y = min(n_a,n_s);cin >> q;
    while (q--){
        ll a,b; cin >> a >> b;
        ll num = (x*min(a,b) - y*max(a,b));
        ll deno = min(a,b)-max(a,b);
        if (x == y or num == 0) {
            cout << "YES" << endl;
        } else if (deno == 0) {
            cout << "NO" << endl;
        }else {
            if (abs(num)%abs(deno) == 0) {
                int k = num/deno;
                if (k >= 0 && k <=y){
                    cout << "YES"<< endl;
                } else {
                    cout << "NO" << endl;
                }
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}