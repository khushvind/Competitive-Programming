#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n,k; cin >> n >> k;
    // cout << s << endl;
    string temp = "";
    string  s = "";
    for (int i = 0; i < k; i++) temp += 'a'+i;
    for (int i = 0; i < n; i++) s += temp;
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