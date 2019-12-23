#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<ll> t(n);
	for (int i=0; i<n; i++)
		cin>>t[i];
	ll ret=t[0];
	for (int i=1; i<n; i++)
		ret=ret/__gcd(ret,t[i])*t[i];
	cout<<ret<<"\n";
	return 0;
}
