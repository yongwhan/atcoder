#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,q; cin>>n>>q;
	map<int,int> val;
	for (int i=0; i<q; i++) {
		int l,r,t; cin>>l>>r>>t;
		for (int j=l; j<=r; j++)
			val[j]=t;
	}
	for (int i=1; i<=n; i++)
		cout << val[i] << endl;
	return 0;
}
