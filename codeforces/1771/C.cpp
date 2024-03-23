#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

const int N = 1e5;
vector<int> isprime(N+1,1), primes;

void Sieve(){
    for (int i = 2; i <= N; i++) {
        if (isprime[i]) {
            primes.push_back(i);
        }
        for (auto p : primes) {
            if (i * p > N) {
                break;
            }
            isprime[i * p] = 0;
            if (i % p == 0) {
                break;
            }
        }
    }
}


int solve(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    set<int> st;
    for (int i = 0; i < n ; i++){
        int x = a[i];
        for (auto p : primes){
            if (p*p > x){
                break;
            } 
            if (x%p==0){
                if (st.count(p)){
                    cout << "YES" << endl;
                    return 0;
                } 
                st.insert(p);
                while (x % p == 0) {
                    x /= p;
                }
            }
        }
        if (x > 1) {
            if (st.count(x)) {
                std::cout << "YES\n";
                return 0;
            }
            st.insert(x);
        }
    }
    cout << "NO" << endl;
    return 0;
}


int main(void){
    Sieve();
    int times;
    cin >> times;
    while (times--) {
        solve();
    }
    return 0;
}