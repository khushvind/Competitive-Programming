#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)
 
 
int main(void){
    int n; cin >> n;
    vector<int> a(32,0);
    for (int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        if (x == 1){
            a[y]++;
            // for (auto x: a){
            //     cout << x << ' ';
            // }
            // cout << endl;
            
        } else {
            bool found = false;
            for (int j = 30; j >= 0 && y >= 0; j--){
                
                for (int t = 0 ; ((1 << j) <= y) &&  t < a[j]; t++) {
                    y -= (1 << j);
                }
                if (y == 0) {
                    found = true;
                    break;
                }
                // cout << j <<" "<< y << endl;
            }
            if (found) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    
    return 0;
}