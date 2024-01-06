#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  int prev = INT_MAX;
  int p_1 = INT_MAX, p_2 = INT_MAX, curr = 1;
  int ans = 0;
  vector<int> v1,v2;
  v1.push_back(INT_MAX);
  v2.push_back(INT_MAX);
  for (auto x : a){
    if (x <= v1.back() && x > v2.back()){
      v1.push_back(x);
    } else if (x <= v2.back() && x > v1.back()){
      v2.push_back(x);
    } else if (x <= v1.back() && x <= v2.back()){
      ((v1.back() > v2.back())? v2 : v1).push_back(x);
    } else if (x > v1.back() && x > v2.back()){
      ((v1.back() > v2.back())? v2 : v1).push_back(x);
      ans++;
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
  };
  return 0;
}