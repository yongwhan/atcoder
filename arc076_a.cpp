#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mx=1e5+777;
const int mod=1e9+7;

vector<ll> fact(mx);

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	fact[0]=1;
	for (int i=1; i<mx; i++)
		fact[i]=(fact[i-1]*i)%mod;
	int n,m; cin>>n>>m;
	if(n>m) swap(n,m);
	if(m>n+1) { cout<<0<<"\n"; return 0; }
	ll ret=(fact[n]*fact[m])%mod;
	if(n==m) ret=(ret*2)%mod;
	cout<<ret<<"\n";
	return 0;
}
