#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)
int mod = 1e9 + 7;
int inf  = 1e9 + 10;



int main(void){
    int n; cin >> n;
    multiset<int> L,R;
    for (int i = 0; i <n ; i++){
        char c; cin >> c;
        int l,r; cin >> l >> r;
        if (c == '+') {
            L.insert(l);
            R.insert(r);
        } else {
            L.erase(L.find(l));
            R.erase(R.find(r));
        }
        if (L.size() >= 2 && *L.rbegin() > *R.begin()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}