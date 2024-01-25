#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int get(const vector<int> &a, const vector<int> &b){
	int res = 0;
	while (res < int(a.size()) && a[res] == b[res])
		++res;
	return res;
}


int solve(){
    int n,m; cin >> n >> m;
    vector<vector<int>> a(n,vector<int> (m));
    for (int i = 0; i < n; i++){
        for (int j = 0; j <m; j++){
            cin >> a[i][j];
            a[i][j]--;
        }
    }
    vector<vector<int>> b(n, vector<int>(m));
	for(int i = 0; i< n;i++) {
        for(int j = 0; j< m; j++) {
            b[i][a[i][j]] = j;
        }
        }
	sort(b.begin(), b.end());
	for (int i = 0; i < n ; i++){
		int j = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
		int ans = 0;
		if (j > 0) ans = max(ans, get(a[i], b[j - 1]));
		if (j < n) ans = max(ans, get(a[i], b[j]));
		cout << ans << " ";
	}
    cout << endl;
       
    
    return 0;
}

int main(){
    int times;
    cin >> times;
    while (times--) {
        solve();
    };
    return 0;
}


#include <bits/stdc++.h>
 
using namespace std;
 
#define forn(i, n) for(int i = 0; i < int(n); i++) 



// int main(){
// 	int t;
// 	scanf("%d", &t);
// 	while (t--){
// 		int n, m;
// 		scanf("%d%d", &n, &m);
// 		vector<vector<int>> a(n, vector<int>(m));
// 		forn(i, n) forn(j, m){
// 			scanf("%d", &a[i][j]);
// 			--a[i][j];
// 		}
// 		vector<vector<int>> b(n, vector<int>(m));
// 		forn(i, n) forn(j, m) b[i][a[i][j]] = j;
// 		sort(b.begin(), b.end());
// 		forn(i, n){
// 			int j = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
// 			int ans = 0;
// 			if (j > 0) ans = max(ans, get(a[i], b[j - 1]));
// 			if (j < n) ans = max(ans, get(a[i], b[j]));
// 			printf("%d ", ans);
// 		}
// 		puts("");
// 	}
// }