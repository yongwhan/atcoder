#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> v(n), c(n);
	int ret=0;
	for (int i=0; i<n; i++)
		cin>>v[i];
	for (int i=0; i<n; i++)
		cin>>c[i];
	for (int i=0; i<n; i++)
		ret+=max(0,v[i]-c[i]);
	cout<<ret<<"\n";
	return 0;
}
