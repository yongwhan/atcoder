#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

ll eval(ll x, ll y) {
	return (x<0 ? 0LL:x/y+1);
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll a,b,x; cin>>a>>b>>x;
	cout << eval(b,x) - eval(a-1,x) << endl;
	return 0;
}
