#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,m; cin>>n>>m;
	ll ret=min(n,m/2);
	m-=2*ret;
	ret+=m/4;
	cout<<ret<<"\n";
	return 0;
}
