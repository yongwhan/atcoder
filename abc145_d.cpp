#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const int mx=1e6+5, mod=1e9+7;

int phi(int n) {
	int result=n;
	for (int i=2; i*i<=n; i++) {
		if(n%i==0) result-=result/i;
		while(n%i==0) n/=i;
	}
	if(n>1) result-=result/n;
	return result;
}

// (a^b)%m
ll exp(ll a, ll b, ll m) {
	ll r=1;
	while(b) {
		if(b%2) r=(r*a)%m;
		a=(a*a)%m;
		b/=2;
	}
	return r;
}

// a^-1 %m, any m
ll inv(ll a, ll m) {
	return exp(a, phi(m)-1, m);
}

// a^-1 %m, prime m
ll invp(ll a, ll m) {
	return exp(a, m-2, m);
}

ll fact[mx];

ll combi(int n, int x, ll m) {
	ll p=fact[n], q=fact[x], r=fact[n-x];
	ll ret=p;
	ret=(ret*invp(q,m))%m;
	ret=(ret*invp(r,m))%m;
	return ret;
}

int main() {
	fact[0]=1;
	for (int i=1; i<mx; i++)
		fact[i]=(fact[i-1]*i)%mod;
	int x,y; cin>>x>>y;
	int sum=x+y;
	if(sum%3) {
		cout<<0<<"\n";
		return 0;
	}
	int k=sum/3,a=x-k, b=k-a;
	if(a<0||a>k||b<0||b>k) {
		cout<<0<<"\n";
		return 0;
	}
	cout<<combi(k,a,mod)<<"\n";
	return 0;
}
