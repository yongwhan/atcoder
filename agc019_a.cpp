#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll a,b,c,d,n; cin>>a>>b>>c>>d>>n;
	n*=4;
	b=min(a*2,b);
	c=min(b*2,c);
	d=min(c*2,d);
	ll ret=n/8 * d; n%=8;
	ret+=n/4 * c; n%=4;
	ret+=n/2 * b; n%=2;
	ret+=n * a;
	cout << ret << endl;
	return 0;
}
