#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k,q; cin>>n>>k>>q;
	map<int,int> ct;
	for (int i=0; i<q; i++) {
		int x; cin>>x;
		ct[x]++;
	}
	for (int i=1; i<=n; i++)
		cout<<(k>q-ct[i]?"Yes":"No")<<"\n";
	return 0;
}
