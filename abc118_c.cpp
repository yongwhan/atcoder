#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i];
	int ret=a[0];
	for (int i=1; i<n; i++)
		ret=__gcd(ret,a[i]);
	cout<<ret<<"\n";
	return 0;
}
