#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    string s; cin >> s;
    int n = s.length();
    int m; cin >> m;
    string l; cin >> l;
    string r; cin >> r;
    int p = -1;
    for (int i = 0; i < m; i++){
        vector<int> vec(10,n);
        for (int j = p+1; j < n; j++){
            if (vec[s[j]-'0'] == n) vec[s[j]-'0'] = j;
        }
        int mx = p;
        for (int j = l[i]-'0' ; j<= r[i]-'0'; j++){
            mx = max(mx,vec[j]);
        }
        if (mx == n){
            cout << "YES" << endl;
            return 0;
        }

        p = mx;
    }
    cout << "NO" << endl;

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