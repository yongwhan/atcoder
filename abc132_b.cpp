#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> p(n);
	for (int i=0; i<n; i++)
		cin>>p[i];
	int ret=0;
	for (int i=1; i<n-1; i++)
		if((p[i-1]<p[i]&&p[i]<p[i+1])||(p[i-1]>p[i]&&p[i]>p[i+1]))
			ret++;
	cout<<ret<<"\n";
	return 0;
}
