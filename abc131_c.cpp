#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll eval(ll a, ll b, ll d) {
	return b/d-(a-1)/d;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll a,b,c,d; cin>>a>>b>>c>>d;
	cout<<(b-a+1)-(eval(a,b,c)+eval(a,b,d)-eval(a,b,c/__gcd(c,d)*d))<<"\n";
	return 0;
}
