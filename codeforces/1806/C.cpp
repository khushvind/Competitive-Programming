#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

int solve(){
    int n;
	cin>>n;
    // cout << n << endl;
    // return 0;
	ll ans=0,sum=0;
    vector<ll> a(n*2+1);
	for(int i=1;i<=n*2;i++) {
		cin>>a[i];
		ans+=abs(a[i]);
		sum+=abs(a[i]-(-1));
	}

	if(n==1) {
		ans=min(ans,abs(a[1]-a[2]));
	}
	if(n==2) {
		ans=min(ans,abs(a[1]-2)+abs(a[2]-2)+abs(a[3]-2)+abs(a[4]-2));
	}
	if(n%2==0) {
		for(int i=1;i<=n*2;i++) {
			ans=min(ans,sum-abs(a[i]-(-1))+abs(a[i]-n));
		}
	}
	cout<<ans<<"\n";
    return 0;
}

int main(void){
    int t; cin >> t;
    while (t--){
        solve();
    }
    return 0;
}