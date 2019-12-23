#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,d,m,t;
	map<int,int> a,b;
	cin>>n;
	while(n-->0)
		cin>>d, a[d]++;
	cin>>m;
	while(m-->0)
		cin>>t, b[t]++;
	for (const auto &it : b)
		if(a[it.first]<it.second) {
			cout<<"NO\n";
			return 0;
		}
	cout<<"YES\n";
	return 0;
}
