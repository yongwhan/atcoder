#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll L,R; cin>>L>>R;
	if(R>=2019+L) {
		cout<<0<<"\n";
		return 0;
	}
	ll ret=INT_MAX;
	for (ll i=L; i<=R; i++)
		for (ll j=i+1; j<=R; j++)
			ret=min(ret,(i*j)%2019);
	cout<<ret<<"\n";
	return 0;
}
