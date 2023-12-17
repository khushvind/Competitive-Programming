#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int even(int n, int m ){
    int curr = 1;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << curr << " " ;
            curr++;
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}

int odd_1(int n, int m){
    vector<vector<int>> a(n, vector<int> (m));
    for (int i = 0; i < n; i++){
        int fact = m*((n+1)/2 + i/2);
        for (int j = 0; j < m; j++){
            if (i%2){
                a[i][j] = fact + j+1;
            } else {
                a[i][j] = j+1 + m*(i/2);
            }
        }
    }
    for (auto x : a){
        for (auto y : x){
            cout << y << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}

int odd_2(int n, int m){
    int curr = 1;
    // return 0;
    // cout << "HI" << endl;
    vector<vector<int>> a(n, vector<int> (m));
    for (int i = 1; i < n; i+= 2){
        for (int j = 0; j < m; j++){
            a[i][j] = curr;
            curr++;
        }
    }
    for (int j = 0; j < m; j++){
        a[0][j] = curr;
        curr++;
    }
    for (int i = 2; i < n; i+= 2){
        for (int j = 0; j < m; j++){
            a[i][j] = curr;
            curr++;
        }
    }


    for (auto x : a){
        for (auto y : x){
            cout << y << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}


int solve(){
    int n,m; cin >> n >> m;
    if (m%2 == 0) {
        even(n,m);
    }else if (n%2== 1) {
        odd_1(n,m);
    }else {
        odd_2(n,m);
    }


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