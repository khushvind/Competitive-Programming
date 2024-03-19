#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n,m; cin >> n >> m;
    vector<vector<int> > a(n, vector<int> (m+1));
    int sum = 0;
    for (int i = 0; i < n; i++){
        int temp = 0;
        for (int j=0; j<m; j++){
            cin >> a[i][j];
            if (a[i][j]) {
                sum++;
                temp++;
            }
        }
        a[i][m] = temp;
    }
    if (sum%n){
        cout << -1 << endl;
        return 0;
    }
    vector<int> x,y,z;
    int req = sum/n, ans = 0;
    for (int j = 0; j < m; j++){
        int mo = 0, le = 0;
        for (int i = 0; i < n ; i++){
            if (a[i][j] == 1 && a[i][m] > req){
                mo++;
            } else if (a[i][j] == 0 && a[i][m] < req){
                le++;
            }
        }
        int to_ex = min(mo,le);
        if (to_ex == 0) continue;
        int t = to_ex;
        for (int i =0; i < n && t > 0; i++){
            if (a[i][j] == 1 && a[i][m] > req){
                a[i][m]--;
                x.push_back(i);
                t--;
            } 
        }
        t = to_ex;
        for (int i =0; i < n && t > 0; i++){
            if (a[i][j] == 0 && a[i][m] < req){
                a[i][m]++;
                y.push_back(i);
                t--;
            } 
        }
        ans += to_ex;
        while (to_ex--) z.push_back(j);
    }
    cout << ans << endl;
    for (int i = 0; i < ans; i++){
        cout << x[i]+1 << " " << y[i]+1 << " " << z[i]+1 << endl;
    }
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