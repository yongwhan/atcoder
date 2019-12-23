#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	map<int,int> ct;
	for (int i=0; i<n; i++) {
		int k; cin>>k;
		for (int j=0; j<k; j++) {
			int a; cin>>a; ct[a]++;
		}
	}
	int ret=0;
	for (const auto &it : ct)
		if(it.second==n)
			ret++;
	cout<<ret<<"\n";
	return 0;
}
