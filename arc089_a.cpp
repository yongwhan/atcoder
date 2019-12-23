#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> t(n+1,0), x(n+1,0), y(n+1,0);
	for (int i=1; i<=n; i++) {
		cin>>t[i]>>x[i]>>y[i];
	}
	for (int i=1; i<=n; i++) {
		int u=t[i]-t[i-1], v=abs(x[i]-x[i-1])+abs(y[i]-y[i-1]);
		if(u%2!=v%2) {
			cout<<"No\n";
			return 0;
		}
		if(v>u) {
			cout<<"No\n";
			return 0;
		}
	}
	cout<<"Yes\n";
	return 0;
}
