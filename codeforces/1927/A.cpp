#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n; cin >> n;
    string s; cin >> s;
    int st=0,ed = n-1;
    while (s[st]!= 'B') st++;
    while (s[ed]!= 'B') ed--;
    cout << max(ed-st+1,0) << endl;


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