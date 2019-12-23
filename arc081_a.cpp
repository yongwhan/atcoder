#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,a; cin>>n;
	map<int,int> ct;
	for (int i=0; i<n; i++)
		cin>>a, ct[a]++;
	multiset<ll> mst;
	for (const auto &it : ct)
		for (int i=0; i<it.second/2; i++)
			mst.insert(it.first);
	if(mst.size()<2) {
		cout<<0<<"\n";
		return 0;
	}
	ll x=*mst.rbegin();
	mst.erase(mst.find(x));
	ll y=*mst.rbegin();
	mst.erase(mst.find(y));
	cout<<x*y<<"\n";
	return 0;
}
