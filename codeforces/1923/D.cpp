#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

ll find(vector<ll>& a, vector<ll>& presum, vector<ll>& diff, int i, ll sum_req){
  ll n = a.size();
  ll idx1 = upper_bound(presum.begin()+i, presum.end(), sum_req)-presum.begin();
  if (idx1 == i+1 && diff[i+1]!=diff[i]) return 1;
  ll idx2 = diff[i+1];
  // cout << idx1 << " " << idx2 << endl;
  if (idx1 == n || idx2 == -1) return -1;
  ll idx = max(idx1,idx2)-i;
  return idx;
}

int solve(){
  ll n; cin >> n;
  vector<ll> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];
  vector<ll> presum1(n),presum2(n),diff1(n,-1),diff2(n,-1);
  presum1[0] = a[0]; presum2[0] = a[n-1];
  for (ll i = 1; i < n; i++) presum1[i] = presum1[i-1]+a[i];
  for (ll i = 1; i < n; i++) presum2[i] = presum2[i-1]+a[n-i-1];
  for (ll i = 1; i < n; i++){
    if (a[i]!= a[i-1]) for (ll j = i-1; j >= 0 && diff1[j]== -1; j--) diff1[j] = i; 
  }
  for (ll i = 1; i < n; i++){
    // if (a[n-i]!= a[n-i-1]) for (int j = i-1; j >= 0 && diff2[j]== -1; j--) diff2[j] = n-i-1; 
    if (a[n-i]!= a[n-i-1]) for (ll j = i-1; j >= 0 && diff2[j]== -1; j--) diff2[j] = i; 
  }
  diff1.push_back(-1),diff2.push_back(-1);
  // for (auto x: presum1){
  //   cout << x << ' ';
  // }
  // cout << endl;
  // return 0;
  vector<ll> ans;
  for (ll i = 0; i < n; i++){
    ll x = find(a,presum1,diff1,i,a[i]+presum1[i]), y = find(a,presum2,diff2,n-i-1, a[i]+presum2[n-i-1]);
    // cout << x << " " << y << endl;
    if (x==-1 && y ==-1) ans.push_back(-1);
    else if (x!= -1 && y!= -1) ans.push_back(min(x,y));
    else if (x!= -1) ans.push_back(x);
    else if (y!= -1) ans.push_back(y);
  }
  for (auto x: ans){
    cout << x << ' ';
  }
  cout << endl;
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