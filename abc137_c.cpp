#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	map<string,ll> ct;
	while(n-->0) {
		string s; cin>>s;
		sort(s.begin(),s.end());
		ct[s]++;
	}
	ll ret=0;
	for (const auto &it : ct) {
		ll x=it.second;
		ret+=x*(x-1)/2;
	}
	cout<<ret<<"\n";
	return 0;
}
