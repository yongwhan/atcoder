#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n; cin>>n;
	ll ret=LLONG_MAX;
	for (ll d=1; d*d<=n; d++)
		if(n%d==0)
			ret=min(ret,d+n/d-2);
	cout<<ret<<"\n";
	return 0;
}
