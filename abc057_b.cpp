#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	int a[n], b[n], c[m], d[m];
	for (int i=0; i<n; i++) cin>>a[i]>>b[i];
	for (int i=0; i<m; i++) cin>>c[i]>>d[i];
	for (int i=0; i<n; i++) {
		int mn=1e9, ret=-1;
		for (int j=0; j<m; j++) {
			int cur=abs(a[i]-c[j])+abs(b[i]-d[j]);
			if(mn>cur) mn=cur, ret=j+1;
		}
		cout << ret << endl;
	}
	return 0;
}
