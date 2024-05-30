#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
	int n; cin >> n;
	string s;cin >> s;
	bool str = false;
	char prev = s[0];
	for (auto x: s){
		if (isalpha(x)){
			if (isdigit(prev)){
				prev = 'a';
			} else if (prev>x){
				cout << "NO" << endl;
				return 0;
			}
			str = true;
			prev = x;
		} else {
			if (str || prev > x) {
				cout << "NO" << endl;
				return 0;
			} else{
				prev = x;
			}
		}
	}
	cout << "YES" << endl;
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