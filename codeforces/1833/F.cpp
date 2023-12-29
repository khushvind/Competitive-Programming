#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define forn(i,n) for(int i = 0; i < n; i++)
#define vi vector<int>
#define mii map<int,int>
#define pb push_back
#define en "\n"
#define cyes cout<<"YES\n"
#define cno cout<<"NO\n"
#define int long long
const int N = 2*1e5+1, MOD = 1e9+7;
 
vi vin(int n) {
    vi v;
    forn(i,n) {
        int inpt;
        cin >> inpt;
        v.pb(inpt);
    }
    return v;
}
 
int inv(int i) {
    return i <= 1 ? i : MOD - (long long)(MOD/i) * inv(MOD % i) % MOD;
}
 
void solve() {
    int n,m;
    cin >> n >> m;
    mii ct;
    vi a;
    forn(i,n){
        int inpt;
        cin >> inpt;
        if(ct[inpt]==0) a.pb(inpt);
        ct[inpt]++;
    }
    sort(a.begin(),a.end());
    if(m==1){
        cout << n << en;
        return;
    }
    n = a.size();
 
    vi product(n,1);
    product[0] = ct[a[0]];
    for(int i=1;i<n;i++){
        product[i] = product[i-1]*ct[a[i]];
        product[i]%=MOD;
    }
    
    int ans = 0;
    forn(i,n){   // i being the smallest element in the dance
        if(i+m-1<n){
            int temp = 1;
            if(i>0) temp = product[i-1];
            if(a[i+m-1]<m+a[i]){
                ans+=product[i+m-1]*inv(temp)%MOD;
                ans%=MOD;
            }
        }    
    }
    cout << ans << en;
}
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t = 1;
    cin >> t;
    forn(i,t) {
        solve();
    }
       
}