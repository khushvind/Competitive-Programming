#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

vector<int> fib(46,1);

bool vt(int& l, int& b, int& x, int& y){
    if (x > b) return false;
    if (x > l) {
        b-= l;
        x-= l;
    } else if (x <= b-l){
        b-= l;
    } else {
        return false;
    }
    return true;
} 
bool hz(int& l, int& b, int& x, int& y){
    if (y > l) return false;
    if (y > b) {
        l-= b;
        y-= b;
    } else if (y <= l-b){
        l-= b;
    } else {
        return false;
    }
    return true;
} 

int solve(){
    int n,x,y; cin >> n >> x >> y;
    bool hoz = true;
    int l = fib[n+1], b = fib[n];
    // cout << l << " " << b << endl;
    while (l > 2 || b > 2){
        bool possible;
        if (hoz){
            possible =  hz(l,b,x,y);
        } else {
            possible = vt(l,b,x,y);
        }
        // cout << l << " " << b << endl;
        if (!possible){
            cout << "NO" << endl;
            return 0;
        }
        hoz = !hoz;
    }
    cout << "YES" << endl;
    return 0;
}

int main(void){
    for (int i = 2; i <46; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
    
    int times;
    cin >> times;
    while (times--) {
        solve();
    };
    return 0;
}