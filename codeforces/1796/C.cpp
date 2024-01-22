#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

bool is_prime(int n){
    ll j =2;
    bool ok =1;
    while(j<=sqrt(n)){
        if(n%j==0){
            ok=0;
            break;
        }
        j++;
    }
    return ok;
}

int power(int n, int m) {
    if (m == 0){
        return 1;
    } else if (m%2 == 1){
        int p = power(n,m/2);
        int o = (p*p);
        return (o*n);
    } else{
        int p = power(n,m/2);
        return (p*p);
    }
}



int solve(){
    ll l,r; cin >> l >> r;
    ll num = log2(r/l)+1;
    ll possible = 0;
    if (power(2,num-1)*l <= r) {
        possible += (r/power(2,num-1))-l+1;
    }
    if (power(2,num-2)*3*l <= r) {
        possible += ((r/(power(2,num-2)*3))-l+1)*(num-1);
    }
    possible %= 998244353;
    cout << num <<  " " <<  possible << endl;

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