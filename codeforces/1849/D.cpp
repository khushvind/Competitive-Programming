#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int main(void){
    int n; cin >> n;
    vector<int> a(n);
    vector<int> col(n);
    for (int i=0; i<n; i++) cin >> a[i];
    int ans = 0;
    for (int i = 0, zero = 0; i <= n;) {
        if (i == n) {
            ans += zero;
            break;
        }
        if (a[i] == 0) {
            zero++;
            i++;
        } else {
            bool two = false;
            int j = i;
            while (j < n and a[j] > 0) {
                if (a[j] == 2) two = true;
                j++;
            }
            if (two) {
                ans += max(zero, 1);
                zero = 0;
                i = j + 1;
            } else if (zero > 0) {
                ans += zero;
                zero = 0;
                i = j;
            } else {
                ans++;
                i = j + 1;
            }
        }
    }
 
    cout << ans << '\n';
    return 0;
}