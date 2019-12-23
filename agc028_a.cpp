#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

ll gcd(ll a, ll b) {
	if(!b) return a;
	return gcd(b,a%b);
}

ll lcm(ll a, ll b) {
	return a/gcd(a,b)*b;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,m; cin>>n>>m;
	string s,t; cin>>s>>t;
	ll l=lcm(n,m);
	map<int,char> mp;
	for (int i=0; i<n; i++)
		mp[l/n * i] = s[i];
	for (int i=0; i<m; i++) {
		ll cur=l/m * i;
		if(mp.find(cur)!=mp.end()) {
			if(mp[cur]!=t[i]) {
				cout << -1 << endl;
				return 0;
			}
		}
	}
	cout << l << endl;
	return 0;
}
