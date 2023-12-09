#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)
int mod = 1e9 + 7;
int inf  = 1e9 + 10;

int solve(){
    string s; cin >> s;
    ll n = s.length();
    ll pos; cin >> pos;

    ll rem = 0;
    while (pos > (n-rem)){
        pos -= n-rem;
        rem++;
    }
    // cout << rem << endl;

    stack<char> st;

    ll i = 0;
    while (i<n){
        if (st.empty() || st.top() <= s[i] || !rem) {
            st.push(s[i]);
            i++;
        } else if (st.top() > s[i] && rem){
            st.pop();
            rem--;
        } 
    }
    while (rem--) st.pop();


    ll iter = st.size()-pos;
    while (iter--){
        st.pop();
    }
    cout << st.top();
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