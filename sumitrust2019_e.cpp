#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;
typedef tuple<int,int,int> tp;

const int mod=1000000007;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	map<tp,ll> ct;
	ct[make_tuple(0,0,0)]=1;
	for (int i=0; i<n; i++) {
		int x; cin>>x;
		map<tp,ll> ct2;
		for (auto it : ct) {
			auto key=it.first;
			if(get<0>(key)==x) {
				tp next_key=make_tuple(get<0>(key)+1,get<1>(key),get<2>(key));
				ct2[next_key]=(ct[key]+ct2[next_key])%mod;
			}
			if(get<1>(key)==x) {
				tp next_key=make_tuple(get<0>(key),get<1>(key)+1,get<2>(key));
				ct2[next_key]=(ct[key]+ct2[next_key])%mod;
			}
			if(get<2>(key)==x) {
				tp next_key=make_tuple(get<0>(key),get<1>(key),get<2>(key)+1);
				ct2[next_key]=(ct[key]+ct2[next_key])%mod;
			}
		}
		ct=ct2;
	}

	ll ret=0;
	for (auto it : ct)
		ret=(ret+it.second)%mod;
	cout<<ret<<"\n";
	return 0;
}
