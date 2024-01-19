#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int SZ = 256;

vector<vector<int>> v(SZ, vector<int> (SZ));

void solve(){
    int n, m;
    cin >> n >> m;
    cout << n * m << endl;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << v[i][j] << " " ;
        }
        cout << endl;
    }
}

int main(){
    int now = 0;
    int n = 256;
    int m = 256;
    for(int i = 0; i < n; i += 2){
        for(int j = 0; j < m; j += 2){
            v[i][j] = now;
            v[i][j + 1] = now + 1;
            v[i + 1][j] = now + 2;
            v[i + 1][j + 1] = now + 3;
            now += 4;
        }
    }
    int num_test;
    cin >> num_test;
    while (num_test--){
        solve();
    }
    return 0;
}