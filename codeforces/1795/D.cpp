#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)
ll mod = 998244353;

ll power(ll n, ll m) {
    if (m == 0){
        return 1LL;
    } else if (m%2 == 1LL){
        ll p = power(n,m/2)%mod;
        ll o = (p*p)%mod;
        return (o*n)%mod;
    } else{
        ll p = power(n,m/2)%mod;
        return (p*p)%mod;
    }
}

// int binpow(int x, int y)
// {
//     int z = 1;
//     while(y)
//     {
//         if(y % 2 == 1) z = mul(z, x);
//         x = mul(x, x);
//         y /= 2;
//     }
//     return z;
// }


ll inv(ll n){
    return power(n,mod-2)%mod;
}


ll nCr(ll n, ll r){
    ll ans = 1;
    for (ll i = 0; i < r; i++){
        // cout <<  i << " " << (inv(i+1)) << endl;
        ans*= ((n-i)*inv(i+1))%mod;
        ans%= mod;
    } 
    // for (ll i = 1; i <= r; i++){
    //     ans/= (i);
    //     // ans%= mod;
    // } 
    return ans;
}

int main(){
    // cout << power(2,5) << endl;
    ll n; cin >> n;
    vector<ll> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    ll ans = 1;
    for (int i = 0; i < n; i+= 3){
        vector<ll> b = {a[i],a[i+1],a[i+2]};
        sort(b.begin(),b.end());
        if (b[0] == b[1] && b[2] == b[1]){
            ans *= 3LL; 
            ans%= mod;
        } else if (b[0] == b[1]){
            ans *= 2LL;
            ans%= mod;
        } else {
            continue;
        }
    }
    int num = n/3;
    ans *= nCr(num,num/2);
    ans%= mod;
    cout << ans << endl;
    return 0;
}


// #include <bits/stdc++.h>
 
// using namespace std;

// const int MOD = 998244353;

// int add(int x, int y)
// {
//     return ((x + y) % MOD + MOD) % MOD;
// }

// int mul(int x, int y)
// {
//     return x * 1ll * y % MOD;   
// }

// int binpow(int x, int y)
// {
//     int z = 1;
//     while(y)
//     {
//         if(y % 2 == 1) z = mul(z, x);
//         x = mul(x, x);
//         y /= 2;
//     }
//     return z;
// }

// int inv(int x)
// {
//     return binpow(x, MOD - 2);    
// }

// int divide(int x, int y)
// {
//     cout << y << " " << inv(y) << endl;
//     return mul(x, inv(y));
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int ans = 1;
//     for(int i = 1; i <= n / 6; i++)
//         ans = mul(ans, divide(i + n / 6, i));
//     for(int i = 0; i < n / 3; i++)
//     {
//         vector<int> a(3);
//         for(int j = 0; j < 3; j++)
//             cin >> a[j];
//         int mn = *min_element(a.begin(), a.end());
//         int cnt_min = count(a.begin(), a.end(), mn);
//         ans = mul(ans, cnt_min);
//     }
//     cout << ans << endl;
// }