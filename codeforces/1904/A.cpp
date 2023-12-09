#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)
int mod = 1e9 + 7;
int inf  = 1e9 + 10;

int solve(){
    ll a,b; cin >> a >> b;
    ll xk,yk; cin >> xk >> yk;
    ll xq,yq; cin >> xq >> yq;
    vector<ll> A = {a,-a};
    vector<ll> B = {b,-b};
    // ll ans = 0;
    set<pair<ll,ll>> st;
    for (auto x : A){
        for (auto y : B){
            for (auto i : A){
                for (auto j : B){
                    if ((xk+x == xq + i) && (yk+y == yq + j)){
                        st.insert({xk+x,yk+y});
                    }
                }
            }
        }
    }
    for (auto x : A){
        for (auto y : B){
            for (auto i : B){
                for (auto j : A){
                    if ((xk+x == xq + i) && (yk+y == yq + j)){
                        st.insert({xk+x,yk+y});
                    }
                }
            }
        }
    }
    for (auto x : B){
        for (auto y : A){
            for (auto i : B){
                for (auto j : A){
                    if ((xk+x == xq + i) && (yk+y == yq + j)){
                        st.insert({xk+x,yk+y});
                    }
                }
            }
        }
    }
    for (auto x : B){
        for (auto y : A){
            for (auto i : A){
                for (auto j : B){
                    if ((xk+x == xq + i) && (yk+y == yq + j)){
                        st.insert({xk+x,yk+y});
                    }
                }
            }
        }
    }
    cout << st.size() << endl;
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