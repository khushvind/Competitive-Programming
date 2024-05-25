#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
	int n; cin >> n;
	vector<int> a(n);
	for (int i=0; i<n; i++) cin >> a[i];
	int cnt=0;
	for (int i = 1; i < n; i++){
		if (a[i] < a[i-1]) cnt++;
	}
	if (cnt > 1) cout << "NO" << endl;
	else if (cnt == 0) cout << "YES" << endl;
	else if (a.back() <= a[0]) cout << "YES" << endl;
	else cout << "NO" << endl;

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