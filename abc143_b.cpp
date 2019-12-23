#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> d(n);
	for (int i=0; i<n; i++)
		cin>>d[i];
	int ret=0;
	for (int i=0; i<n; i++)
		for (int j=i+1; j<n; j++)
			ret+=d[i]*d[j];
	cout<<ret<<"\n";
	return 0;
}
