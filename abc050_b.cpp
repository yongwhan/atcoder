#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	map<int,int> t;
	int ret=0;
	for (int i=1; i<=n; i++)
		cin>>t[i], ret+=t[i];
	int m; cin>>m;
	while(m--) {
		int p,x; cin>>p>>x;
		cout << ret-t[p]+x << endl;
	}
	return 0;
}
