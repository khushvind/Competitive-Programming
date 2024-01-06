#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  vector<int> dp(n+1);
  vector<int> used(n+1);
  int ans = 0;
  
  for (int i = 0; i <n; i++){
    int v = dp[a[i]];
    if (!used[a[i]]){
      used[a[i]] = 1;
      dp[a[i]] = ans - i;
    } else {
      dp[a[i]] = max(dp[a[i]], ans - i);
      ans =  max(ans , v+i+1); 
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