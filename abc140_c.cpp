#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,sum=0; cin>>n;
	vector<int> b(n);
	for(int i=1; i<n; i++)
		cin>>b[i];
	sum+=b[1]+b[n-1];
	for(int i=1; i<n-1; i++)
		sum+=min(b[i],b[i+1]);
	cout<<sum<<"\n";
	return 0;
}
