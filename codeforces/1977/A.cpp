#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
	int n,m; cin >> n >> m;
	if (m<= n && (n-m)%2==0) cout << "YES" << endl;
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