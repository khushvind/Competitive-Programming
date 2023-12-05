#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)
int mod = 1e9 + 7;
int inf  = 1e9 + 10;

int solve(){
    string s ; cin >> s;
    stack<int> stu;
    stack<int> stl;
    for (int i = 0; i < s.length(); i++){
        // cout << s[i] << " " << s << endl;
        if (s[i] == 'b'){
            s[i] = '-';
            if (stl.empty()) continue;
            s[stl.top()] = '-';
            stl.pop();
        } else if (s[i] == 'B'){
            s[i] = '-';
            if (stu.empty()) continue;
            s[stu.top()] = '-';
            stu.pop();
        } else if (s[i] - 'a' >=0) {
            stl.push(i);
        } else {
            stu.push(i);
        }
        
    }
    // cout << s << endl;
    string ans = "";
    for (char x : s){
        if (x!= '-'){
            ans += x;
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