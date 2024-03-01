#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        vector<int> c(n+m+1,0);
        vector<int> a(n+1,0);
        for(int i=1;i<=n;i++)
        {
            cin >> a[i];
            c[a[i]]+=(m+1);
        }
        for(int i=1;i<=m;i++)
        {
            int p,b;
            cin >> p >> b;
            c[a[p]]-=(m-i+1);
            c[b]+=(m-i+1);
            a[p]=b;
        }
        ll res=(ll(m)*(m+1)/2*ll(2*n));
        for(int i=1;i<=n+m;i++) res-=(ll(c[i])*(c[i]-1)/2);
        cout << res << "\n";
    }
    return 0;
}
