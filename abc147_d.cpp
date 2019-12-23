#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const int mod=1e9+7;
const int mx=300007;
vector<ll> a(mx,-1);

// (a*b)%m
ll mul(ll a, ll b, ll m) {
	ll x=0, y=a%m;
	while(b>0) {
		if(b%2) x=(x+y)%m;
		y=(y*2)%m;
		b/=2;
	}
	return x%m;
}

int main() {
	int n; cin>>n;
	for (int i=0; i<n; i++)
		cin>>a[i];
	ll ret=0; 
	for (int i=0; i<60; i++) { 
		int zero=0, one=0;
		for (int j=0; j<n; j++) {
			if (a[j]%2) one++;
			else zero++;
			a[j]>>=1;
		} 
		ret=(ret+mul(mul(one,zero,mod),1LL<<i,mod))%mod;
	} 
	cout<<ret<<"\n";
	return 0; 
}
