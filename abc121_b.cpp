#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m,c; cin>>n>>m>>c;
	vector<int> b(m);
	for (int i=0; i<m; i++)
		cin>>b[i];
	int ret=0,a;
	for (int i=0; i<n; i++) {
		int cur=c;
		for (int j=0; j<m; j++)
			cin>>a, cur+=a*b[j];
		if(cur>0)
			ret++;
	}
	cout<<ret<<"\n";
	return 0;
}
