#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)
int mod = 1e9 + 7;
int inf  = 1e9 + 10;

bool possible(vector<int>& a, int maxi, int opr){
    for (int i = 0; i < a.size(); i++){
        int idx = i,mx = maxi,k = opr ;
        while (k>0 && (idx < a.size()-1)){
            if (mx > a[idx]){
                int diff = mx-a[idx];
                k-= diff;
                mx--;
                idx++;
            }
            if (k >= 0 && mx <= a[idx]){
                return true;
            }
        }
    }
    return false;
}

int solve(){
    int n,k; cin >> n >> k;
    vector<int> a(n);
    for (int i=0; i<n; i++){
        cin >> a[i];
    };
    int mx = *max_element(a.begin(),a.end());
    int l = mx, r = mx+k;
    while (true){
        int m = (l+r)/2;
        // cout << l << " " << r << endl;
        bool p = possible(a,m,k);
        if (l == m){
            if (possible(a,m+1,k)){
                cout << (m+1) << endl;
            } else {
                cout << m << endl;
            }
            return 0;
        }
        if (p) {
            l = m;
        } else {
            r = m-1;
        }
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