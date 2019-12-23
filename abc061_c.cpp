#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	ll k; cin>>k;
	map<int,ll> ct;
	for (int i=0; i<n; i++) {
		int a,b; cin>>a>>b; ct[a]+=b;
	}
	ll cur=0;
	for (const auto &it : ct) {
		if(cur+it.second>=k) {
			cout<<it.first<<"\n";
			return 0;
		}
		cur+=it.second;
	}
	return 0;
}
