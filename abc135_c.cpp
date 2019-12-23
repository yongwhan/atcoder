#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<ll> a(n+1), b(n);
	for (int i=0; i<n+1; i++)
		cin>>a[i];
	for (int i=0; i<n; i++)
		cin>>b[i];
	ll ret=0;
	for (int i=0; i<n; i++) {
		ll cur=min(a[i],b[i]);
		a[i]-=cur;
		b[i]-=cur;
		ret+=cur;
		cur=min(a[i+1],b[i]);
		a[i+1]-=cur;
		b[i]-=cur;
		ret+=cur;
	}
	cout<<ret<<"\n";
	return 0;
}
