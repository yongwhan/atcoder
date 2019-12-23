#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	map<int,int> deg;
	while(m-->0) {
		int a,b; cin>>a>>b;
		if(a==1||a==n) deg[b]++;
		if(b==1||b==n) deg[a]++;
	}
	for (int i=2; i<=n-1; i++)
		if(deg[i]==2) {
			cout<<"POSSIBLE\n";
			return 0;
		}
	cout<<"IMPOSSIBLE\n";
	return 0;
}
