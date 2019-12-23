#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<ll> a(n), b(n);
	for (int i=0; i<n; i++)
		cin>>a[n-1-i]>>b[n-1-i];
	ll added=0;
	for (int i=0; i<n; i++)
		added+=( ((a[i]+added+b[i]-1)/b[i]) * b[i] - (a[i]+added) );
	cout << added << endl;
	return 0;
}
