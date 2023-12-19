#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n,k; cin >> n >> k;
    vector<int> a(n);
    for (int i=0; i<n; i++){
        cin >> a[i];
    };
    vector<int> b(n);
    for (int i=0; i<n; i++){
        cin >> b[i];
    };
    vector<pair<int,int>> mx(n);
    vector<int> used(n);
    mx[0] = {b[0],0};
    for (int i = 1; i < n; i++){
        if (b[i] > mx[i-1].first){
            mx[i] = {b[i],i};
        } else {
            mx[i] = mx[i-1];
        }
    }
    int sum = 0;
    for (int i = 0; i < min(n,k); i++){
        sum += a[i];
        used[i]++;
        // cout << i << " " << sum << endl;
    }

    sum += mx[min(n,k)-1].first*max(k-n,0);
    used[mx[min(n,k)-1].second]+= max(k-n,0);
    // for (auto x: used){
    //     cout << x << ' ';
    // }
    // cout << endl;
    

    // cout << "initial sum " << sum << endl;
    int i = min(k-1,n-1);
    int ans = sum;
    while (i > 0  && used[i]){
        int u = used[i];
        sum += (mx[i-1].first)*u - a[i] - (u-1)*b[i] ;
        used[mx[i-1].second]+= u;
        // cout << i << " " << sum << endl;
        ans = max(ans,sum);
        i--;
    } 
    cout << ans << endl;
    
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