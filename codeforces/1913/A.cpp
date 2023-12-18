#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int valu(string s){
    int ans = 0;
    for (int i = 0; i < s.length(); i++){
        ans = ans*10 + int(s[i]-'0');
    }
    return ans;
}

int solve(){
    string s; cin >> s ;
    int val = 0;
    int n = s.length();
    for (int i = 0; i <n-1 ; i++){
        if (s[i+1] == '0') continue;
        string a = (s.substr(0,i+1)) ;
        string b = (s.substr(i+1,n-i));
        int x = valu(a);
        int y = valu(b);
        if (y > x){
            cout << x << " " << b << endl;
            return 0;
        }
    }
    cout <<  -1 << endl;
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