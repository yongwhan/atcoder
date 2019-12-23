#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n), b(n), c(n-1);
	for (int i=0; i<n; i++)
		cin>>a[i], a[i]--;
	for (int i=0; i<n; i++)
		cin>>b[i];
	for (int i=0; i<n-1; i++)
		cin>>c[i];
	int ret=0;
	for (int i=0; i<n; i++)
		ret+=b[a[i]];
	for (int i=0; i<n-1; i++)
		if(a[i]+1==a[i+1])
			ret+=c[a[i]];
	cout<<ret<<"\n";
	return 0;
}
