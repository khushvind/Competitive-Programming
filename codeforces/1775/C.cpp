#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)
int mx = 61;

int solve(){
    ll n,x; cin >> n >> x;
    int i;
    for ( i = 0; i <= mx; i++){
        // cout << ((1LL<<i)&n) << " " << ((1LL<<i)&x) << endl;
        if ((1LL<<i)&n && (1LL<<i)&x){
            break;
        } else if (((1LL<<i)&n) == 0 && ((1LL<<i)&x)!= 0){
            cout << -1 << endl;
            return 0;
        } 
    }
    for (int j = i+1; j <= mx; j++){
        // cout << ((1LL<<j)&n) << " " << ((1LL<<j)&x) << " " <<  (((1LL<<j)&n) == 0 )<< endl;
        if ((((1LL<<j)&n) != 0 && ((1LL<<j)&x) == 0) || (((1LL<<j)&n) == 0 && ((1LL<<j)&x) != 0)){
            cout << -1 << endl;
            return 0;
        } 
    }
    // cout << i << endl;
    // return 0;
    
    ll ans = 0;
    for (int k = mx; k >= i; k--){
        // if ((1LL<<k)&n == !((1LL<<k)&x)){
        //     cout << -1 << endl;
        //     return 0;
        // }
        if (((1LL<<k)&n)!= 0 && ((1LL<<k)&x) != 0){
            ans += (1LL<<k);
        }
    }
    // cout << ans <<  " " ;
    for (int k = i-1; k >= 0; k--){
        if (((1LL<<k)&n) != 0){
            if ( ((1LL<<(k+1))&n) == 0){
            // cout << "k " <<  k << endl;
                ans += (1LL<<(k+1));
                break;
            } else {
                cout << - 1 << endl;
                return 0;
            }
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
    }
    return 0;
}