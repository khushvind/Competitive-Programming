#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define FOR(a,b) for(long long i = a; i < b; i++)

char query(int a,int b,int c,int d){
	cout << "? " << a << " " << b << " " << c << " " << d << endl;
    cout.flush();
	char x; cin>>x;
    cout.flush();
	return x;
}

int solve(){
    int n; cin >> n;
	int mx=0,ans1=0,ans2;
	vector<int> v;
	for(int i=1;i<n;i++){
		int c=query(ans1,ans1,i,i);
		if(c=='<') ans1=i;
	}
	v.push_back(0);
	for(int i=1;i<n;i++){
		int c=query(mx,ans1,i,ans1);
		if(c=='<'){
		    mx=i;
		    v.clear();
		    v.push_back(i);
		}
		else if(c=='=') v.push_back(i);
	}
	ans2=v[0];
	for(int i=1;i<v.size();i++){
		int c=query(ans2,ans2,v[i],v[i]);
		if(c=='>') ans2=v[i];
	}
	cout << "! " << ans1 << " " << ans2 << endl;
	cout.flush();
    return 0;
}

int main(void){
    int times;
    cin >> times;
    while (times--) {
        solve();
    }
    return 0;
}