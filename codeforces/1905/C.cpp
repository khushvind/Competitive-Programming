#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

bool sorted(string s){
    for (int i = 1; i < s.length(); i++){
        if (s[i] < s[i-1]) return false;
    }
    return true;
}

bool customCompare (pair<int,int> a, pair<int,int> b) {
    if (b.first > a.first) return true;
    if (b.first == a.first) {
        if (b.second < a.second) return true;
    }
    return false;
}

int solve(){
    int n; cin >> n;
    string s; cin >> s;
    if (sorted(s)) {
        cout << 0 << endl;
        return 0;
    }
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    for (int i = 0; i < n; i++){
        while (!pq.empty() && s[i]-'a' > pq.top().first){
            pq.pop();
        } 
        pq.push({s[i]-'a', i});
    }
    string t = s;
    vector<pair<int,int>> vec;
    vector<int> idx;
    vector<int> alp;

    

    while (!pq.empty() ) {
        auto x = pq.top();
        pq.pop();
        vec.push_back(x);
    }
    sort(vec.begin(),vec.end(), customCompare);
    
    for (auto x : vec){
        // cout << x.first << " " << x.second << endl;
        idx.push_back(x.second);
        alp.push_back(x.first);
    }

    int cnt = 0;
    for (auto x : alp){
        if (x == alp.back()) cnt++;
    }
    // cout << alp[0] << endl;
    
    int times = alp.size()-1;
    for (int i = 0; i < idx.size(); i++){
        t[idx[i]] = alp[idx.size()-1-i] + 'a';
    }
    // cout << t << endl;
    if (sorted(t)) cout << (times -cnt +1) << endl;
    else cout << -1 << endl;
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