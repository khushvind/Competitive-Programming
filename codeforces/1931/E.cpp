#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n,m; cin >> n >> m;
    vector<int> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    vector<pair<int,int>> b(n);
    int non_zeros = 0, zeros = 0;
    for (int i = 0; i < n; i++){
        int t = a[i];
        while (t%10 == 0){
            b[i].first++;
            zeros++;
            t/=10;
        }
        while (t){
            b[i].second ++;
            non_zeros++;
            t/= 10;
        }
    }
    string winner;
    if (non_zeros >= m+1) winner = "Sasha";
    else if (non_zeros + zeros < m+1) winner = "Anna";
    else {
        sort(b.rbegin(),b.rend());
        
        int cnt = 0;
        for (int i = 0; i < n; i+= 2){
            cnt+= b[i].first;
        }
        if (zeros + non_zeros - cnt < m+1) winner = "Anna";
        else winner = "Sasha";
    }
   

    cout << winner << endl;
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