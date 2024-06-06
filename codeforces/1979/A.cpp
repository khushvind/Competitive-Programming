#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
	int n; cin >> n;
	vector<int> a(n);
	for (int i=0; i<n; i++) cin >> a[i];
	int ans = INT_MAX;
	for (int i = 1; i < n; i++){
		ans = min(ans, max(a[i],a[i-1])-1);
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