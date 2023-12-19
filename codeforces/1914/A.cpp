#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n; cin >> n;
    string s; cin >> s;
    vector<int> a(26);
    int ans = 0;
    for (auto x: s){
        a[x - 'A']++;
    }
    for (int i = 0; i < 26; i++){
        if (a[i] >= i+1){
            ans ++;
        }
    }
    cout << ans << endl;
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