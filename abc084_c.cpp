#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; cin>>n;
	vector<int> c(n,0), s=c, f=c;
	for (int i=0; i<n-1; i++)
		cin>>c[i]>>s[i]>>f[i];
	for (int i=0; i<n; i++) {
		int t=0;
		for (int j=i; j<n-1; j++)
			t=max(s[j],(t+f[j]-1)/f[j]*f[j])+c[j];
		cout<<t<<endl;
	}
	return 0;
}
