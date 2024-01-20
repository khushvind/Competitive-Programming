#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n,k; cin >> n >> k;
    string s,t; cin >> s >> t;
    bool possible = true;
    int l = n-1-k, r = k;
    vector<int> a(26),b(26);
    for (int i = 0; i < n; i++){
        a[s[i]-'a']++;
        b[t[i]-'a']++;
    }

    for (int i = 0; i < 26; i++){
        if (a[i] != b[i]) {
            possible = false;
            // cout << "HI " << endl;
            break;
        }
    }

    for (int i = max(0,l+1); i< min(k,n); i++){
        if (s[i] != t[i]){
            possible = false;
            // cout << "HI " << endl;
            break;
        }
    }
    cout << (possible? "YES" : "NO") << endl;

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