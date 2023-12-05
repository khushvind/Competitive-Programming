#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)
int mod = 1e9 + 7;
int inf  = 1e9 + 10;

int solve(){
    int n; cin >> n;
    string s; cin >> s;
    vector<int> a(26);
    for (char x : s){
        a[x-'a'] ++;
    }
    int m = *max_element(a.begin(),a.end());
    if (m > s.length()/2){
        cout << (2*m-s.length()) << endl;
    } else if (s.length()%2) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
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