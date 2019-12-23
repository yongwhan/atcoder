#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	map<int,int> ct;
	for (int i=0; i<m; i++) {
		int l,r; cin>>l>>r;
		ct[l]++; ct[r+1]--;
	}
	int ret=0,cur=0;
	for (int i=1; i<=n; i++) {
		cur+=ct[i];
		if(cur==m)
			ret++;
	}
	cout<<ret<<"\n";
	return 0;
}
