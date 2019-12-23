#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

ll d(ll x) {
	string s=to_string(x);
	return s.size();
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll a,b,x; cin>>a>>b>>x;
	ll ret=0;
	for (int i=1; i<1000000; i++) {
		if(x<=i*b) continue;
		ll cur=(x-i*b)/a;
		if(cur*a+d(cur)*b<=x)
			ret=max(ret,cur);
	}
	cout<<min(ret,1000000000LL)<<"\n";
	return 0;
}
