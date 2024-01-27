#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n,k,m; cin >> n >> k >> m;
    string s; cin >> s ;
    unordered_map<int,int> mp;
    for (auto x : s){
        mp[x-'a'] ++;
    }
    for (int i = 0; i < k; i++){
        if (mp[i] < n){
            cout << "NO" << endl;
            string ans = "";
            while(n--) ans+= i+'a';
            cout << ans << endl;
            return 0;
        }
    }
    set<int> st;
    string ans = "";
    for (int i = 0; i < m; i++){
        // cout << st.size() << endl;
        if (st.size() == k-1 && st.count(s[i]-'a') == 0){
            ans += s[i];
            st.clear();
        } else {
            st.insert(s[i]-'a');
        }
        if (ans.length() == n) break;
    }
    if (ans.length() == n){
        cout << "YES" << endl;
        return 0;
    }
    st.clear();
    // cout << ans << endl;
    for (int i = m-1; i>= 0; i--){
        if (st.size() == k-1 && st.count(s[i]-'a') == 0){
            ans += s[i];
            // cout << s[i] << endl;
            break;
        }
        st.insert(s[i]-'a');
    }
    while (ans.length() < n) ans += ans.back();
    cout << "NO" << endl;
    cout << ans << endl;

    

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