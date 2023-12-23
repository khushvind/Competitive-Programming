#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n,m,k; cin >> n >> m >> k;
    vector<vector<char>> v(n,vector<char>(m-1,'R'));
    vector<vector<char>> v1(n-1,vector<char>(m,'R'));
    for(ll i=1;i<n-1;i+=2){
        v1[i][0]='B';
    }
    ll ind=0;
    if(n%2) ind=1;
    for(ll i=ind;i<m-1;i+=2){
        v[n-1][i]='B';
    }
    if(n%2==0){
        v[n-2][0]='B';
        v[n-2][1]='B';
    }
    else{
        v1[n-2][1]='B';
        v1[n-2][2]='B';
    }
    ll x=n+m-2;
    if(k<x) cout<<"NO"<<endl;
    else{
       ll r=k-x;
       if(k==x || r%2==0){
           cout<<"YES"<<endl;
           for(ll i=0;i<n;i++){
               for(ll j=0;j<m-1;j++) cout<<v[i][j]<<" ";
               cout<<endl;
           }
           for(ll i=0;i<n-1;i++){
               for(ll j=0;j<m;j++) cout<<v1[i][j]<<" ";
               cout<<endl;
           }
       }
       else cout<<"NO"<<endl;
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