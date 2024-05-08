#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n,m; cin >> n >> m;
    int x = 1, y = 1 ;
    // Q1
    cout << "? " << x << " " << y << endl;
    cout.flush();
    int d; cin >> d; 
    int x1 = (d>n-1)? n-1 : d ,x2 = (d>m-1)? 1+d-m : 0 ,y1 = (d>n-1)? 1+d-n : 0 ,y2 = (d>m-1)? m-1 : d;
    // Q2
    cout << "? " << x1+1 << " " << y1+1 << endl;
    cout.flush();
    int d1; cin >> d1; 
    // Q3
    cout << "? " << x2+1 << " " << y2+1 << endl;
    cout.flush();
    int d2; cin >> d2; 
    if (d1%2 == 0 && d2%2 == 1){
        cout << "! " << (x1-d1/2+1) << " " << (y1+d1/2+1) << endl;
        cout.flush();
        return 0;
    } else if (d1%2 == 1 && d2%2 == 0){
        cout << "! " << (x2+d2/2+1) << " " << (y2-d2/2+1) << endl;
        cout.flush();
        return 0;
    } 
    // Q4
    cout << "? " << (x1-d1/2+1) << " " << (y1+d1/2+1) << endl;
    cout.flush();
    int d3; cin >> d3; 
    if (d3 == 0){
        cout << "! " << (x1-d1/2+1) << " " << (y1+d1/2+1) << endl;
    } else {
        cout << "! " << (x2+d2/2+1) << " " << (y2-d2/2+1) << endl;
    }
    cout.flush();
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

