#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)
int mod = 1e9 + 7;
int inf  = 1e9 + 10;
 
 
int digit_sum(int t){
    int sum = 0;
    while (t){
        sum += t%10;
        t /= 10;
    }
    return sum;
}
 
int solve(){
    int n,q; cin >> n >> q;
    vector<int> a(n);
    set<int> s;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        if(a[i] > 9) s.insert(i);
    }
    while(q--) {
        int type; cin >> type;
        if(type == 1) {
            int l, r; cin >> l >> r; --l, --r;
            int lst = l;
            while(!s.empty()){
                auto it = s.lower_bound(lst);
                if(it == s.end() || *it > r) break;
                a[*it] = digit_sum(a[*it]);
                lst = *it+1;
                if(a[*it] <= 9) s.erase(it);;
            }
        } else {
            int x; cin >> x; --x;
            cout << a[x] << endl;
        }
    }
    return 0;
}
 
int main(){
    int times;cin >> times;
    while (times--) {
        solve();
    };
    return 0;
}