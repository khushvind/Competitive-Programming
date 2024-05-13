#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n,x; cin >> n >> x;
    vector<int> p(n);
    for (int i = 0; i < n; i++) cin >> p[i]; 
    int r = n+1, l = 1;
    while (r-l != 1){
        int mid = (r+l)/2;
        if (p[mid-1]<= x) l = mid;
        else r = mid;
    }
    int a,b;
    for (int i = 0; i < n; i++){
        if (p[i] == 1) a = i;
        if (p[i] == x) b = i;
    }
    a++;b++;
    cout << 2 << endl;
    cout << a << " "<< b << endl;
    cout << a << " " << l << endl;

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