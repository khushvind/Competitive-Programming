#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    ll k ; cin >> k;
    vector<ll> digits;
    while (k){
        digits.push_back(k%9);
        k/= 9;
    }
    for (int i = digits.size()-1; i >= 0; i--){
        cout << char(digits[i] < 4? digits[i]+'0' : digits[i] + '1') ;
    }
    cout << endl;
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