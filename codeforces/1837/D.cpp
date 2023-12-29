#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n ; cin >> n;
    string s; cin >> s;
    vector<int> a,b;
    for (int i = 0; i < n; i++){
        if (s[i] == '('){
            a.push_back(i);
        } else {
            b.push_back(i);
        }
    }
    if (a.size() != b.size()){
        cout << -1 << endl;
        return 0;
    }
    vector<int> ans(n);
    char x = s[0];
    int temp = 0;
    bool single = true;
    for (int i = 0; i < n; i++){
        if (x == s[i]){
            temp++;
        } else {
            temp--;
        }
        if (temp < 0){
            single = false;
            break;
        }
        // cout << i << " " << temp << endl;
    }
    if (single == true){
        cout << 1 << endl;
        for (auto x: s){
            cout << 1 << ' ';
        }
        cout << endl;
        return 0;
    } else {
        cout << 2 << endl;
    }
    int i = 0, j = b.size()-1;
    ans[a[i]] = 1;
    ans[b[j]] = 1;
    while (a[i] < b[j] && i < a.size() && j >= 0){
        if (a[i] < b[j]){
            i++;
            j--;
            ans[a[i]] = 1;
            ans[b[j]] = 1;
        }
    }
    // for (auto x: a){
    //     cout << x << ' ';
    // }
    // cout << endl;
    // for (auto x: b){
    //     cout << x << ' ';
    // }
    // cout << endl;
    // cout << i << " " << j << endl;
    
    for ( ; i < a.size() && j >= 0; i++, j--){
        ans[a[i]] = 2;
        ans[b[j]] = 2;
    }
    for (auto x: ans){
        cout << x << ' ';
    }
    cout << endl;
    
    


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