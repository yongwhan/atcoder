#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n; cin>>n;
	int ret=INT_MAX;
	for (ll x=1; x*x<=n; x++)
		if(n%x==0)
			ret=min(ret,(int) max(to_string(x).size(),to_string(n/x).size()));
	cout<<ret<<"\n";
	return 0;
}
