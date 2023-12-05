#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)
int mod = 1e9 + 7;
int inf  = 1e9 + 10;

int solve(){
    string s; cin >> s;
    int x = s[0]-'a';
    int y = s[1]-'0'-1;
    for (int i = 0; i < 8; i++){
        if (i!= x){
            char a = (i+'a');
            int b = y+1;
            cout << a << b<< endl;
        }
    }
    for (int i = 0; i < 8; i++){
        if (i!= y){
            char a = (x+'a');
            int b = i+1;
            cout << a << b<< endl;
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