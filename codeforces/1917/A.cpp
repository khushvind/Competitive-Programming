#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n; cin >> n;
    vector<int> a(n);
    int neg = 0;
    int zero = 0;
    for (int i=0; i<n; i++){
        cin >> a[i];
        if (a[i] < 0){
            neg++;
        } else if (a[i] == 0){
            zero = 1;
        }
    };
    if (zero || neg%2 == 1){
        cout << 0 << endl;
    } else if (neg == 0 || neg%2 == 0){
        cout << 1 << endl;
        cout << 1 << " " << 0 << endl;
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