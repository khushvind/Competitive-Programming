#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
	int x,y,z; cin >> x >> y >> z;
    if ((x+y+z)%2) {
        cout << -1 << endl;
		return 0;
    }
    cout << min(x+y, (x+y+z)/2) << endl;
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