#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)
int mod = 1e9 + 7;
int inf  = 1e9 + 10;

int solve(){
    int n,k; cin >> n >> k;
    string s; cin >> s;
    vector<int> l(k);
    vector<int> r(k);
    for (int i= 0; i < k; i++) cin >> l[i];
    for (int i= 0; i < k; i++) cin >> r[i];
    int q; cin >> q;
    vector<int> changes(n);
    for (int i =0; i <q; i++) {
        int x; cin >> x;
        changes[x-1]++;
    }

    for (int i = 0; i < k; i++){
        int a = l[i]-1, b = r[i]-1;
        int sum = 0;
        for (int j = a; j <= (a+b)/2;j++){
            sum = (sum + changes[j] + changes[a+b-j])%2;
            if (sum){
                swap(s[j],s[a+b-j]);
            }
        }
    }
    cout << s << endl;
    

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