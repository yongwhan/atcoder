#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	map<char,ll> ct;
	while(n-->0) {
		string s; cin>>s;
		ct[s[0]]++;
	}

	string lst="MARCH";
	int sz=lst.size();
	ll ret=0;
	for (int bt=0; bt<(1<<sz); bt++) {
		if(__builtin_popcount(bt)!=3)
			continue;
		ll cur=1;
		for (int i=0; i<sz; i++)
			if(bt&(1<<i))
				cur*=ct[lst[i]];
		ret+=cur;
	}
	cout<<ret<<"\n";
	return 0;
}
