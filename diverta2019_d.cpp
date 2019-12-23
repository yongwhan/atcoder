#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n; cin>>n;
	set<ll> st;
	for (ll d=1; d*d<=n; d++)
		if(n%d==0)
			st.insert(d), st.insert(n/d);
	ll ret=0;
	for (auto q : st) {
		ll m=n/q-1;
		if(m<=0||q>=m) continue;
		ret+=m;
	}
	cout<<ret<<"\n";
	return 0;
}
