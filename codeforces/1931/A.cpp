#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n;cin >> n;
    string s = "";
    for (int i = 0; i < 3; i++){
        if ((2-i)*26+1 > n) {
            s += 'a';
            n -= 1;
        } else {
            s += (n-(2-i)*26 - 1) + 'a';
            n-= s.back()-'a' + 1;
        }

    }
    cout << s << endl;

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