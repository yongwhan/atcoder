#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	int n; cin>>n;
	vector<ll> a(n);
	for (int i=0; i<n; i++) cin>>a[i];
	vector<ll> ret(2);
	for (int c=0; c<2; ++c){
		int sgn=c?1:-1;
		for (ll s=0, t=0; t<n; t++, sgn*=-1) {
			s+=a[t];
			if(sgn*s<=0) ret[c]+=abs(s)+1, s=sgn;
		}
	}
	cout<<min(ret[0],ret[1])<<"\n";
	return 0;
}
