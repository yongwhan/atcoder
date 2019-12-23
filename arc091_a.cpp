#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,m; cin>>n>>m;
	if(n>m) swap(n,m);
	if(n==1&&m==1) {
		cout<<1<<"\n";
		return 0;
	}
	if(n==1) {
		cout<<m-2<<"\n";
		return 0;
	}
	cout<<(n-2)*(m-2)<<"\n";
	return 0;
}
