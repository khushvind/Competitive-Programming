#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n;cin >> n;
    string s; cin >> s;
    string t = s;
    reverse(t.begin(),t.end());
    // string x = min(s,t),y = max(s,t);
    if (s==t) cout << s << endl;
    else if (s < t){
        if (n%2 == 0){
            cout << s << endl;
        } else {
            cout << (s+t) << endl;
        }
    } else {
        if (n%2 == 1){
            cout << t << endl;
        } else {
            cout << (t+s) << endl;
        }
    }
    

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