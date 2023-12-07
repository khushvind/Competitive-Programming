#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)
int mod = 1e9 + 7;
int inf  = 1e9 + 10;

int solve(){
    string s; cin >> s;
    int n = s.length();
    int b_s = 0;
    vector<int> A;
    int B = 0;
    for (int i = 0; i <n ;i++){
        if (s[i] == 'A'){
            int temp = 0;
            while (s[i] == 'A' && i < n){
                temp ++;
                i++;
            }
            i--;
            A.push_back(temp);
        } else {
            B++;
        }
    }
    // for (auto x: A){
    //     cout << x << ' ';
    // }
    // cout << endl;
    // cout << "B " << B << endl;
    if (A.size() > B){
        // cout << "Case 1 ";
        cout << (accumulate(A.begin(),A.end(),0)-*min_element(A.begin(),A.end())) << endl;
    } else {
        // cout << "Case 2 ";
        cout << accumulate(A.begin(),A.end(),0) << endl; 
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