#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    string s; cin >> s;
    int one = 0, zero = 0;
    int n = s.length();
    int last = 0;
    for (int i = 0; i < n; i++){
        if (s[i]-'0'){
            one++;
        } else {
            zero++;
        }
        if (zero ==  one) {
            zero -= one;
            one = 0;
            last = i+1;
        }
    }
    if (last >=n) {
        cout << 0 << endl;
        return 0;
    }
    // cout << last << endl;
    for (int i = last; i < n; i++){
        if (s[i] == '0'){
            if (one == 0){
                cout << zero << endl;
                return 0;
            }
            one--;
        } else {
            if (zero == 0){
                // cout << i << endl;
                cout << one << endl;
                return 0;
            }
            zero--;
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