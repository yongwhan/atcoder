#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,x; cin>>n;
	map<ll,ll> ct;
	ll pre=0;
	for (int i=0; i<n; i++) {
		ct[pre]++;
		cin>>x;
		pre+=x;
	}
	ct[pre]++;

	ll ret=0;
	for (auto it : ct)
		ret+=it.second*(it.second-1)/2;
	cout << ret << endl;
	return 0;
}
