#include <bits/stdc++.h>
using namespace std;

int main() {
    
    #ifdef ABHISHEK_SRIVASTAVA
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n];
        priority_queue<pair<int, int>> pq;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            pq.push({-a[i], i});
        }
        for (int i = 0; i < n; i++)
            cin >> b[i];
        while (!pq.empty()) {
            int ind = pq.top().second, l = ind, r = ind;
            pq.pop();
            while (l >= 0 && a[l] <= a[ind] && b[l] >= a[ind])
                a[l--] = a[ind];
            while (r < n && a[r] <= a[ind] && b[r] >= a[ind])
                a[r++] = a[ind];
        }
        string ans = "YES\n";
        for (int i = 0; i < n; i++)
            if (a[i] != b[i]) {
                ans = "NO\n";
                break;
            }
        cout << ans;
    }

    return 0;

}